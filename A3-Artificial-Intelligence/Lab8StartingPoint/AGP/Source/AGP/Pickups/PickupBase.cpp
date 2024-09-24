// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupBase.h"

#include "Components/BoxComponent.h"

// Sets default values
APickupBase::APickupBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Creates and attaches the Actor Components to this actor.
	PickupCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Pickup Collider"));
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup Mesh"));
	
	// Specifies that the root transform of this actor should be the transform of the Collider component.
	SetRootComponent(PickupCollider);
	
	// Attaches the static mesh component to be a child of the collider. This means that when the actor's root transform
	// is moved (i.e. the collider transform) then the mesh will move with it.
	PickupMesh->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void APickupBase::BeginPlay()
{
	Super::BeginPlay();

	if (PickupCollider)
	{
		// This attaches our OnPickupOverlap function to be called when the OnComponentBeginOverlap event is triggered.
		// We use .AddDynamic to add a function to a multicast dynamic delegate event.
		// OnPickupOverlap needs to match the exist signature of the OnComponentBeginOverlap type which is an
		// FOnComponentBeginOverlapSignature. You can find out what this signature is by looking through the engine code.
		// Right click on OnComponentBeginOverlap, then Go to Declaration & Usages, then right click on that type and
		// go to Declaration and Usages then you will find the signature.
		PickupCollider->OnComponentBeginOverlap.AddDynamic(this, &APickupBase::OnPickupOverlap);
	}
	else
	{
		// Sometimes it can be useful to print error messages if something that shouldn't be a nullptr is a nullptr.
		// Although in this case we are very confident that PickupCollider will exist because we set it up in the constructor.
		UE_LOG(LogTemp, Error, TEXT("PickupCollider is null in the PickupBase class."))
	}
}

void APickupBase::OnPickupOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitInfo)
{
	UE_LOG(LogTemp, Display, TEXT("Overlap event occurred in PickupBase"))
}

// Called every frame
void APickupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

