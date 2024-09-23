// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupBase.h"
#include "AGP/WeaponComponent.h"
#include "WeaponPickup.generated.h"

/**
 * 
 */
 
 
UENUM(BlueprintType)
enum EWeaponRarity{
	Common,
	Rare,
	Master,
	Legendary
};

UCLASS()
class AGP_API AWeaponPickup : public APickupBase
{
	GENERATED_BODY()

protected:
	
	virtual void OnPickupOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitInfo) override;
	
	UPROPERTY(BlueprintReadOnly)
	TEnumAsByte<EWeaponRarity> WeaponRarity = EWeaponRarity::Common;
	FWeaponStats WeaponStats;

	UPROPERTY()
	FVector<float> StatRandomizer(EWeaponRarity rarity);
	

private:
	void GenerateWeaponPickup();
	
};
