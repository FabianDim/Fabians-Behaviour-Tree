// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansComposite.h"
#include "FabiansParallel.generated.h"

/**
 * 
 */
UCLASS()
class UFabiansParallel : public UFabiansComposite
{
	GENERATED_BODY()

public:
	enum EPolicy {
		RequireOne,
		RequireAll,
	   };
	UFabiansParallel(EPolicy Success, EPolicy Failure);



protected:
	EPolicy SuccessPolicy;
	EPolicy FailurePolicy;
	virtual EStatus update() override;
	void OnTerminate(EStatus Status);

	UFabiansParallel(const FObjectInitializer& ObjectInitializer);
};
struct Monitor : public UFabiansParallel
{
	void AddCondition(UFabiansBehaviourTree* Condition);
	void AddAction (UFabiansBehaviourTree* Action);
};