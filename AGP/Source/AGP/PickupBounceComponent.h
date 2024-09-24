// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PickupBounceComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AGP_API UPickupBounceComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPickupBounceComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void TickBounceObject(float DeltaTime);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	/**
	 * The speed that the object will move.
	 */
	UPROPERTY(EditInstanceOnly)
	float BounceSpeed;

	/**
	 * The bounce extent defines how far from its initial position it will move up and down.
	 */
	UPROPERTY(EditInstanceOnly)
	float BounceExtent;

	bool bIsMovingUp;

	FVector StartingPosition;
		
		
};
