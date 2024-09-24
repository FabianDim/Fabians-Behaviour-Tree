// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PickupManagerSubsystem.generated.h"

class AWeaponPickup;
/**
 * 
 */
UCLASS()
class AGP_API UPickupManagerSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()
public:

	virtual TStatId GetStatId() const override
	{
		return TStatId();
	}

protected:
	
	/**
	 * The world locations of all possible locations that a pickup can spawn.
	 */
	TArray<FVector> PossibleSpawnLocations;
	float PickupSpawnRate = 5.0f;
	float TimeSinceLastSpawn = 0.0f;
	
	virtual void Tick(float DeltaTime) override;

private:

	void SpawnWeaponPickup();
	void PopulateSpawnLocations();
	
};
