// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansComposite.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UFabiansComposite : public UFabiansBehaviourTree
{
	GENERATED_BODY()

public:
	
	void AddChild(UFabiansBehaviourTree* Child);
	void RemoveChild(UFabiansBehaviourTree*);
	void ClearChildren();

protected:
	typedef TArray<UFabiansBehaviourTree*> FBehaviors;
	FBehaviors Children;
	
};