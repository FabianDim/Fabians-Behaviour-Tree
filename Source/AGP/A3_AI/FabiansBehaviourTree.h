// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "FabiansBehaviourTree.generated.h"

/**
 * 
 */

enum class EStatus
{
	Running,
	Success,
	Failure,
	Invalid,
	Aborted
};

UCLASS()
class AGP_API AFabiansBehaviourTree : public AAIController
{
	GENERATED_BODY()

	void BeginPlay();

protected:

	AFabiansBehaviourTree(const FObjectInitializer& ObjectInitializer);
	virtual EStatus update();
	virtual void OnInitialise();
	virtual void OnTerminate(EStatus Status);

public:
	/*constructor for the AFabiansBehaviourTree class that sets the behaviour
	compoenent and inits the status to invalid.*/
	AFabiansBehaviourTree() : BehaviorComponent(nullptr), CurrentStatus(EStatus::Invalid)
	{
	};

	virtual ~AFabiansBehaviourTree();

	EStatus Tick();
	

private:
	UPROPERTY(EditAnywhere)
	UBehaviorTreeComponent* BehaviorComponent;

	EStatus CurrentStatus;
	
};
