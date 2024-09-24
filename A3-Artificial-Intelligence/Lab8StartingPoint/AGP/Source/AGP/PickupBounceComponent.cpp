// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupBounceComponent.h"

// Sets default values for this component's properties
UPickupBounceComponent::UPickupBounceComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPickupBounceComponent::BeginPlay()
{
	Super::BeginPlay();

	StartingPosition = GetOwner()->GetActorLocation();
	bIsMovingUp = true;
}

void UPickupBounceComponent::TickBounceObject(float DeltaTime)
{
	FVector CurrentPosition = GetOwner()->GetActorLocation();
	float NewZ = CurrentPosition.Z + (bIsMovingUp ? DeltaTime * BounceSpeed: -DeltaTime * BounceSpeed);
	if (bIsMovingUp && NewZ > StartingPosition.Z + BounceExtent)
	{
		bIsMovingUp = false;
		NewZ = StartingPosition.Z + BounceExtent;
	} else if (!bIsMovingUp && NewZ < StartingPosition.Z - BounceExtent)
	{
		bIsMovingUp = true;
		NewZ = StartingPosition.Z - BounceExtent;
	}
	CurrentPosition.Z = NewZ;
	GetOwner()->SetActorLocation(CurrentPosition);
}


// Called every frame
void UPickupBounceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TickBounceObject(DeltaTime);
}

