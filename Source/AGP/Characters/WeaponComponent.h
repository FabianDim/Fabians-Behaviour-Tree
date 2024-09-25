// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8 {
	Rifle,
	Pistol
};

USTRUCT(BlueprintType)
struct FWeaponStats
{
	GENERATED_BODY()
public:
	
	EWeaponType WeaponType = EWeaponType::Rifle;
	float Accuracy = 1.0f;
	float FireRate = 0.2f;
	float BaseDamage = 10.0f;
	int32 MagazineSize = 5;
	float ReloadTime = 1.0f;

	/**
	 * A debug ToString function that allows the easier printing of the weapon stats.
	 * @return A string detailing the weapon stats stored in this struct.
	 */
	FString ToString() const
	{
		FString WeaponString = "";
		WeaponString += "Accuracy:      " + FString::SanitizeFloat(Accuracy) + "\n";
		WeaponString += "Fire Rate:     " + FString::SanitizeFloat(FireRate) + "\n";
		WeaponString += "Base Damage:   " + FString::SanitizeFloat(BaseDamage) + "\n";
		WeaponString += "Magazine Size: " + FString::FromInt(MagazineSize) + "\n";
		WeaponString += "Reload Time:   " + FString::SanitizeFloat(ReloadTime);
		return WeaponString;
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AGP_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponComponent();

	bool Fire(const FVector& BulletStart, const FVector& FireAtLocation);
	/**
	 * Starts the process of reloading.
	 */
	void Reload();
	void SetWeaponStats(const FWeaponStats& WeaponInfo);

	bool IsMagazineEmpty();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	FWeaponStats WeaponStats;
	int32 RoundsRemainingInMagazine;
	float TimeSinceLastShot;
	bool bIsReloading = false;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	/**
	 * Called after the reload has been started delayed by the weapon stats reload time.
	 */
	void CompleteReload();
	float CurrentReloadDuration = 0.0f;
		
};
