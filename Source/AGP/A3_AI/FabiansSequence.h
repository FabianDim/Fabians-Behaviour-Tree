// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansComposite.h"
#include "FabiansSequence.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API AFabiansSequence : public AFabiansComposite
{
	GENERATED_BODY()

protected:
	TOptional<FBehaviors::RangedForIteratorType> CurrentChild;
	virtual ~AFabiansSequence();
	virtual void OnInitialise() override;
	virtual EStatus update() override;
	
	
};

UCLASS()
class AFabiansFilter : public AFabiansSequence
{
	GENERATED_BODY()

public:
	void AddCondition(AFabiansBehaviourTree* Condition);
	void AddAction(AFabiansBehaviourTree* Action);
};
	