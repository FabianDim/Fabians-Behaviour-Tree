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
class AGP_API UFabiansBehaviourTree : public UObject
{
	GENERATED_BODY()

	void BeginPlay();

protected:

	UFabiansBehaviourTree(const FObjectInitializer& ObjectInitializer);
	virtual EStatus update();
	virtual void OnInitialise();

	UPROPERTY(Transient)
	UBlackboardComponent* BlackboardComponent;

	UPROPERTY(Transient)
	UBehaviorTreeComponent* BehaviorTreeComponent;

public:
	/*constructor for the AFabiansBehaviourTree class that sets the behaviour
	compoenent and inits the status to invalid.*/
	UFabiansBehaviourTree() : BlackboardComponent(nullptr), BehaviorTreeComponent(nullptr), BehaviorComponent(nullptr),
	                          CurrentStatus(EStatus::Invalid)
	{
	};
	bool IsTerminated() const;
	bool IsRunning() const;
	void Abort();
	virtual void OnTerminate(EStatus Status);

	/*virtual ~AFabiansBehaviourTree();*/

	EStatus Tick();
	EStatus GetStatus() const;

	UFUNCTION(BlueprintCallable, Category=Behavior)
	void ChaseTarget();
	
	

private:
	UPROPERTY(EditAnywhere)
	UBehaviorTreeComponent* BehaviorComponent;

	EStatus CurrentStatus;
	
};
