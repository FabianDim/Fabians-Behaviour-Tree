 // Fill out your copyright notice in the Description page of Project Settings.
#include "AGPGameInstance.h"
#include "Pickups/WeaponPickup.h"

UClass* UAGPGameInstance::GetWeaponPickupClass() const
{
 return WeaponPickupClass.Get();
}


