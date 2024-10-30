// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "EngineUtils.h"
#include "HealthComponent.h"
#include "PlayerCharacter.h"
#include "AGP/A3_AI/EvadeAction.h"
#include "AGP/A3_AI/FabiansActiveSelector.h"
#include "AGP/A3_AI/FabiansParallel.h"
#include "AGP/A3_AI/FabiansSelector.h"
#include "AGP/A3_AI/FabiansSequence.h"
#include "AGP/A3_AI/HealthCondition.h"
#include "AGP/A3_AI/MoveToPlayerAction.h"
#include "AGP/A3_AI/PatrolAction.h"
#include "AGP/A3_AI/PlayerDetectedCondition.h"
#include "AGP/A3_AI/UShootAction.h"
#include "AGP/Pathfinding/PathfindingSubsystem.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>("Pawn Sensing Component");
}

void AEnemyCharacter::GetTickPatrol()
{
	TickPatrol();
}

void AEnemyCharacter::GetTickEngage()
{
	TickEngage();
}


void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	// DO NOTHING IF NOT ON THE SERVER
	if (GetLocalRole() != ROLE_Authority) return;

	PathfindingSubsystem = GetWorld()->GetSubsystem<UPathfindingSubsystem>();
	if (PathfindingSubsystem)
	{
		CurrentPath = PathfindingSubsystem->GetRandomPath(GetActorLocation());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to find the PathfindingSubsystem"))
	}
	if (PawnSensingComponent)
	{
		PawnSensingComponent->OnSeePawn.AddDynamic(this, &AEnemyCharacter::OnSensedPawn);
	}
	BehaviourTreeRoot = NewObject<UFabiansActiveSelector>(this);
	if (!BehaviourTreeRoot)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create BehaviourTreeRoot as UFabiansActiveSelector"));
		return;
	}

	UFabiansActiveSelector* RootSelector = Cast<UFabiansActiveSelector>(BehaviourTreeRoot);
	if (!RootSelector)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to cast BehaviourTreeRoot to UFabiansActiveSelector"));
		return;
	}

	UFabiansSelector* Selector = NewObject<UFabiansSelector>(this);
	if (!Selector)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed Selector"));
		return;
	}
	// Create sequences
	UFabiansSequence* EvadeSequence = NewObject<UFabiansSequence>(this);
	UFabiansSequence* EngageSequence = NewObject<UFabiansSequence>(this);
	UFabiansSequence* PatrolSequence = NewObject<UFabiansSequence>(this);

	if (!EvadeSequence || !EngageSequence || !PatrolSequence)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create one of the sequences"));
		return;
	}

	// Create conditions and actions
	UHealthCondition* HealthCondition = NewObject<UHealthCondition>(this);
	if (!HealthCondition)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create HealthCondition"));
		return;
	}
	HealthCondition->EnemyCharacter = this;
	//HealthCondition->SetHealthThreshold(40.0f);
	UEvadeAction* EvadeAction = NewObject<UEvadeAction>(this);
	if (!EvadeAction)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create EvadeAction"));
		return;
	}
	EvadeAction->EnemyCharacter = this;

	UPlayerDetectedCondition* PlayerDetected = NewObject<UPlayerDetectedCondition>(this);
	if (!PlayerDetected)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create PlayerDetected"));
		return;
	}
	PlayerDetected->EnemyCharacter = this;

	UMoveToPlayerAction* MoveToPlayerAction = NewObject<UMoveToPlayerAction>(this);
	if (!MoveToPlayerAction)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create MoveToPlayerAction"));
		return;
	}
	MoveToPlayerAction->EnemyCharacter = this;

	UPlayerNotDetectedCondition* PlayerNotDetected = NewObject<UPlayerNotDetectedCondition>(this);
	if (!PlayerNotDetected)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create PlayerNotDetected"));
		return;
	}
	PlayerNotDetected->EnemyCharacter = this;

	UPatrolAction* PatrolAction = NewObject<UPatrolAction>(this);
	if (!PatrolAction)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create PatrolAction"));
		return;
	}
	PatrolAction->EnemyCharacter = this;

	// Build sequences
	EvadeSequence->AddChild(HealthCondition);
	EvadeSequence->AddChild(EvadeAction);

	EngageSequence->AddChild(PlayerDetected);
	EngageSequence->AddChild(MoveToPlayerAction);

	PatrolSequence->AddChild(PlayerNotDetected);
	PatrolSequence->AddChild(PatrolAction);


	Selector->AddChild(EvadeSequence);
	UE_LOG(LogTemp, Error, TEXT("Adding Evade Sequence"));
	Selector->AddChild(EngageSequence);
	UE_LOG(LogTemp, Error, TEXT("Adding Engage Sequence"));
	Selector->AddChild(PatrolSequence);
	UE_LOG(LogTemp, Error, TEXT("Adding Patrol Sequence"));
	// Add sequences to root selector
	RootSelector->AddChild(Selector);
}


void AEnemyCharacter::MoveAlongPath()
{
	// Execute the path. Should be called each tick.

	// If the path is empty do nothing.
	if (CurrentPath.IsEmpty()) return;
	
	// 1. Move towards the current stage of the path.
	//		a. Calculate the direction from the current position to the target of the current stage of the path.
	FVector MovementDirection = CurrentPath[CurrentPath.Num()-1] - GetActorLocation();
	MovementDirection.Normalize();
	//		b. Apply movement in that direction.
	AddMovementInput(MovementDirection);
	// 2. Check if it is close to the current stage of the path then pop it off.
	if (FVector::Distance(GetActorLocation(), CurrentPath[CurrentPath.Num() - 1]) < PathfindingError)
	{
		CurrentPath.Pop();
	}
}

void AEnemyCharacter::TickPatrol()
{
	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetRandomPath(GetActorLocation());
	}
	MoveAlongPath();
}

void AEnemyCharacter::TickEngage()
{
	
	if (!SensedCharacter) return;
	
	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetPath(GetActorLocation(), SensedCharacter->GetActorLocation());
	}
	MoveAlongPath();
	if (HasWeapon())
	{
		if (WeaponComponent->IsMagazineEmpty())
		{
			Reload();
		}
		Fire(SensedCharacter->GetActorLocation());
	}
}

void AEnemyCharacter::TickEvade()
{
	// Find the player and return if it can't find it.
	if (!SensedCharacter) return;

	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetPathAway(GetActorLocation(), SensedCharacter->GetActorLocation());
	}
	MoveAlongPath();
}

void AEnemyCharacter::OnSensedPawn(APawn* SensedActor)
{
	if (APlayerCharacter* Player = Cast<APlayerCharacter>(SensedActor))
	{
		SensedCharacter = Player;
		//UE_LOG(LogTemp, Display, TEXT("Sensed Player"))
	}
}

void AEnemyCharacter::UpdateSight()
{
	if (!SensedCharacter) return;
	if (PawnSensingComponent && !PawnSensingComponent->HasLineOfSightTo(SensedCharacter))
	{
		SensedCharacter = nullptr; // Clear when line of sight is lost
		UE_LOG(LogTemp, Display, TEXT("Lost Player"));
	}
}


// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (BehaviourTreeRoot)
	{
		BehaviourTreeRoot->Tick();
	}
}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

APlayerCharacter* AEnemyCharacter::FindPlayer() const
{
	APlayerCharacter* Player = nullptr;
	for (TActorIterator<APlayerCharacter> It(GetWorld()); It; ++It)
	{
		if(!It)
		{
			return nullptr;
		}
		Player = *It;
		break;
	}
	if (!Player)
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to find the Player Character in the world."))
	}
	return Player;
}

