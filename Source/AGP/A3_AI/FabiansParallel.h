// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansComposite.h"
#include "FabiansParallel.generated.h"

/**
 * 
 */
UCLASS()
class AFabiansParallel : public AFabiansComposite
{
	GENERATED_BODY()

public:
	enum EPolicy {
		RequireOne,
		RequireAll,
	   };
	AFabiansParallel(EPolicy Success, EPolicy Failure);



protected:
	EPolicy SuccessPolicy;
	EPolicy FailurePolicy;
	virtual EStatus update() override;
	void OnTerminate(EStatus Status);

	AFabiansParallel(const FObjectInitializer& ObjectInitializer);
};
struct Monitor : public AFabiansParallel
{
	void AddCondition(AFabiansBehaviourTree* Condition);
	void AddAction (AFabiansBehaviourTree* Action);
};