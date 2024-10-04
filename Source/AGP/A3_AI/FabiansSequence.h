// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansComposite.h"
#include "FabiansSequence.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UFabiansSequence : public UFabiansComposite
{
	GENERATED_BODY()

protected:
	//FBehaviors::TIterator CurrentChild;
	//virtual ~AFabiansSequence();
	virtual void OnInitialise() override;
	virtual EStatus update() override;
	int32 CurrentChildIndex;
	
	
};

UCLASS()
class UFabiansFilter : public UFabiansSequence
{
	GENERATED_BODY()

public:
	void AddCondition(UFabiansBehaviourTree* Condition);
	void AddAction(UFabiansBehaviourTree* Action);
};
	