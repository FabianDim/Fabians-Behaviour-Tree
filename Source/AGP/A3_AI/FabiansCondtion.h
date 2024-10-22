// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansCondtion.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UFabiansCondtion : public UFabiansBehaviourTree
{
	GENERATED_BODY()
public:
	UPROPERTY()
	bool bNegate = false;

	// Override this method to implement the condition logic
	virtual bool CheckCondition() PURE_VIRTUAL(UCondition::CheckCondition, return false;);

	virtual EStatus update() override;
};

UCLASS()
class UHealthAbove40Condition : public UFabiansCondtion
{
	GENERATED_BODY()

public:
	
};
