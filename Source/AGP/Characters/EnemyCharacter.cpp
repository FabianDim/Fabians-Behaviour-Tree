// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "EngineUtils.h"
#include "HealthComponent.h"
#include "PlayerCharacter.h"
#include "AGP/A3_AI/FabiansActiveSelector.h"
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


void AEnemyCharacter::BeginPlay() //build the behaviou r tree here
{
    Super::BeginPlay();

    PathfindingSubsystem = GetWorld()->GetSubsystem<UPathfindingSubsystem>();
    if (!PathfindingSubsystem)
    {
        UE_LOG(LogTemp, Error, TEXT("Unable to find the PathfindingSubsystem"));
        return;
    }

    CurrentPath = PathfindingSubsystem->GetRandomPath(GetActorLocation());
	
    if (PawnSensingComponent)
    {
        PawnSensingComponent->OnSeePawn.AddDynamic(this, &AEnemyCharacter::OnSensedPawn);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("PawnSensingComponent is null"));
    }
	//Every time I make a new object I always check that it exists.
    // Create the root behavior tree node as UFabiansActiveSelector which will actively select the root of the behaviour tree
    BehaviourTreeRoot = NewObject<UFabiansActiveSelector>(this);
    UFabiansActiveSelector* RootSelector = Cast<UFabiansActiveSelector>(BehaviourTreeRoot);
    if (!RootSelector)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to cast BehaviourTreeRoot to UFabiansActiveSelector"));
        return;
    }
	
	UFabiansSequence* EngageSequence = NewObject<UFabiansSequence>(this);
	UFabiansFilter* EngageFilter = NewObject<UFabiansFilter>(this);
	UPlayerDetectedCondition* PlayerDetectedCondition = NewObject<UPlayerDetectedCondition>(this);
	//UShootAction* ShootAction = NewObject<UShootAction>(this);
	UMoveToPlayerAction* MoveToPlayerAction = NewObject<UMoveToPlayerAction>(this);
	//UFabiansParallel* EngageParallel = NewObject<UFabiansParallel>(this);

	//EngageParallel->AddChild(MoveToPlayerAction);
	//EngageParallel->AddChild(ShootAction);
	EngageFilter->AddCondition(PlayerDetectedCondition);
	EngageFilter->AddAction(MoveToPlayerAction);
	EngageSequence->AddChild(EngageFilter);

	RootSelector->AddChild(EngageSequence);
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

