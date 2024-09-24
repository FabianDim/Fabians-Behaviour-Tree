// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AGPGameInstance.generated.h"

class AWeaponPickup;
/**
 * 
 */
UCLASS()
class AGP_API UAGPGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UClass* GetWeaponPickupClass() const;

protected:

	UPROPERTY(EditDefaultsOnly, Category="Pickup Classes")
	TSubclassOf<AWeaponPickup> WeaponPickupClass;
	
};
