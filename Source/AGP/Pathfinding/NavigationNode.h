// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavigationNode.generated.h"

UCLASS()
class AGP_API ANavigationNode : public AActor
{
	GENERATED_BODY()

	friend class UPathfindingSubsystem;
	
public:	
	// Sets default values for this actor's properties
	ANavigationNode();

	virtual bool ShouldTickIfViewportsOnly() const override;
	float GScore;
	float HScore;
	ANavigationNode* CameFrom;
	float FScore() const
	{
		return GScore + HScore;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TArray<ANavigationNode*> ConnectedNodes;
	UPROPERTY(VisibleAnywhere)
	USceneComponent* LocationComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
