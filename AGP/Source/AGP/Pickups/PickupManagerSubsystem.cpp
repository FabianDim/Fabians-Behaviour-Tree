// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupManagerSubsystem.h"

#include "WeaponPickup.h"
#include "AGP/AGPGameInstance.h"
#include "AGP/Pathfinding/PathfindingSubsystem.h"

void UPickupManagerSubsystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (PossibleSpawnLocations.IsEmpty())
	{
		PopulateSpawnLocations();
	}

	TimeSinceLastSpawn += DeltaTime;
	if (TimeSinceLastSpawn >= PickupSpawnRate)
	{
		SpawnWeaponPickup();
		TimeSinceLastSpawn = 0.0f;
	}
}

void UPickupManagerSubsystem::SpawnWeaponPickup()
{
	if (PossibleSpawnLocations.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to spawn weapon pickup."))
		return;
	}
	
	if (const UAGPGameInstance* GameInstance =
		GetWorld()->GetGameInstance<UAGPGameInstance>())
	{
		FVector SpawnPosition =
			PossibleSpawnLocations[FMath::RandRange(0, PossibleSpawnLocations.Num()-1)];
		SpawnPosition.Z += 50.0f;
		GetWorld()->SpawnActor<AWeaponPickup>(
			GameInstance->GetWeaponPickupClass(), SpawnPosition, FRotator::ZeroRotator);

		//UE_LOG(LogTemp, Display, TEXT("Weapon Pickup Spawned"))
	}
}

void UPickupManagerSubsystem::PopulateSpawnLocations()
{
	PossibleSpawnLocations.Empty();
	if (const UPathfindingSubsystem* PathfindingSubsystem = GetWorld()->GetSubsystem<UPathfindingSubsystem>())
	{
		PossibleSpawnLocations = PathfindingSubsystem->GetWaypointPositions();
	}
}
