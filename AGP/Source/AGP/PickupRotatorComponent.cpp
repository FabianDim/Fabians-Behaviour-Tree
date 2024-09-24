// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupRotatorComponent.h"

// Sets default values for this component's properties
UPickupRotatorComponent::UPickupRotatorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPickupRotatorComponent::BeginPlay()
{
	Super::BeginPlay();

	FVector ActorLocation = GetOwner()->GetActorLocation();
	//UE_LOG(LogTemp, Warning, TEXT("Current Location: %s"), *ActorLocation.ToString());
	
}

void UPickupRotatorComponent::TickRotateObject(const float& DeltaTime)
{
	FRotator CurrentActorRotation = GetOwner()->GetActorRotation();
	CurrentActorRotation.Yaw += DeltaTime * RotationSpeed;
	GetOwner()->SetActorRotation(CurrentActorRotation);
}


// Called every frame
void UPickupRotatorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TickRotateObject(DeltaTime);
}

