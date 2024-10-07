// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "EngineUtils.h"
#include "HealthComponent.h"
#include "PlayerCharacter.h"
#include "AGP/A3_AI/FabiansParallel.h"
#include "AGP/A3_AI/FabiansSelector.h"
#include "AGP/A3_AI/FabiansSequence.h"
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

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Initialize the PathfindingSubsystem
	PathfindingSubsystem = GetWorld()->GetSubsystem<UPathfindingSubsystem>();
	if (!PathfindingSubsystem)
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to find the PathfindingSubsystem"));
		return; // Early exit if subsystem is not found
	}

	// Initialize the CurrentPath
	CurrentPath = PathfindingSubsystem->GetRandomPath(GetActorLocation());

	// Initialize the PawnSensingComponent
	if (PawnSensingComponent)
	{
		PawnSensingComponent->OnSeePawn.AddDynamic(this, &AEnemyCharacter::OnSensedPawn);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("PawnSensingComponent is null"));
	}

	BehaviourTreeRoot = NewObject<UFabiansSelector>(this);

	// Create Engage Sequence
	UFabiansSequence* EngageSequence = NewObject<UFabiansSequence>(this);
	UPlayerDetectedCondition* PlayerDetected = NewObject<UPlayerDetectedCondition>(this);

	// Set EnemyCharacter reference
	PlayerDetected->EnemyCharacter = this;

	// Create Attack Parallel Node
	UFabiansParallel* AttackParallel = NewObject<UFabiansParallel>(this);
	AttackParallel->SuccessPolicy = UFabiansParallel::EPolicy::RequireOne;
	AttackParallel->FailurePolicy = UFabiansParallel::EPolicy::RequireAll;

	// Create Shoot and Move Actions
	UShootAction* ShootAction = NewObject<UShootAction>(this);
	UMoveToPlayerAction* MoveAction = NewObject<UMoveToPlayerAction>(this);

	// Set EnemyCharacter references
	ShootAction->EnemyCharacter = this;
	MoveAction->EnemyCharacter = this;

	// Build Attack Parallel Node
	AttackParallel->AddChild(ShootAction);
	AttackParallel->AddChild(MoveAction);

	// Build Engage Sequence
	EngageSequence->AddChild(PlayerDetected);
	EngageSequence->AddChild(AttackParallel);

	// Create Evade Filter
	UFabiansFilter* EvadeFilter = NewObject<UFabiansFilter>(this);
	//ULowHealthCondition* LowHealthCondition = NewObject<ULowHealthCondition>(this);
	//UEvadeAction* EvadeAction = NewObject<UEvadeAction>(this);

	// Set EnemyCharacter references
	//LowHealthCondition->EnemyCharacter = this;
	//EvadeAction->EnemyCharacter = this;

	// Build Evade Filter
	/*EvadeFilter->AddCondition(LowHealthCondition);*/
	//EvadeFilter->AddAction(EvadeAction);

	// Create Patrol Action
	UPatrolAction* PatrolAction = NewObject<UPatrolAction>(this);
	PatrolAction->EnemyCharacter = this;

	// Build the root behavior tree
	UFabiansSelector* RootSelector = Cast<UFabiansSelector>(BehaviourTreeRoot);
	RootSelector->AddChild(EngageSequence);
	RootSelector->AddChild(EvadeFilter);
	RootSelector->AddChild(PatrolAction);
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
	if (PawnSensingComponent)
	{
		if (!PawnSensingComponent->HasLineOfSightTo(SensedCharacter))
		{
			SensedCharacter = nullptr;
			//UE_LOG(LogTemp, Display, TEXT("Lost Player"))
		}
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
		Player = *It;
		break;
	}
	if (!Player)
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to find the Player Character in the world."))
	}
	return Player;
}

