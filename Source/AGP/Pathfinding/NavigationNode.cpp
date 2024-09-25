// Fill out your copyright notice in the Description page of Project Settings.


#include "NavigationNode.h"

// Sets default values
ANavigationNode::ANavigationNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	LocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Location Component"));
	SetRootComponent(LocationComponent);
	
}

// Called when the game starts or when spawned
void ANavigationNode::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANavigationNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*FColor SphereColor = FColor::Blue;
	if (ConnectedNodes.Contains(this))
	{
		SphereColor = FColor::Red;
	}
	
	DrawDebugSphere(GetWorld(), GetActorLocation(), 50.0f, 4, SphereColor, false, -1, 0, 5.0f);
	
	for (const ANavigationNode* ConnectedNode : ConnectedNodes)
	{
		if (ConnectedNode)
		{
			FColor LineColor = FColor::Red;
			if (ConnectedNode->ConnectedNodes.Contains(this))
			{
				LineColor = FColor::Green;
			}
			DrawDebugLine(GetWorld(), GetActorLocation(), ConnectedNode->GetActorLocation(),
				LineColor, false, -1, 0, 5.0f);
		}
	}*/
}

bool ANavigationNode::ShouldTickIfViewportsOnly() const
{
	return true;
}

