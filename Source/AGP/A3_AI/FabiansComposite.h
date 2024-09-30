// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansComposite.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API AFabiansComposite : public AFabiansBehaviourTree
{
	GENERATED_BODY()

public:
	void AddChild(AFabiansBehaviourTree*);
	void RemoveChild(AFabiansBehaviourTree*);
	void ClearChildren();

protected:
	typedef TArray<AFabiansBehaviourTree*> FBehaviors;
	FBehaviors Children;
	
};
