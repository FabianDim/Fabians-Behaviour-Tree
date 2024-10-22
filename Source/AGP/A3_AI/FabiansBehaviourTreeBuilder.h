// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansAction.h"
#include "FabiansActiveSelector.h"
#include "FabiansBehaviourTree.h"
#include "FabiansCondtion.h"
#include "FabiansDecorator.h"
#include "UObject/NoExportTypes.h"
#include "FabiansBehaviourTreeBuilder.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UFabiansBehaviourTreeBuilder : public UFabiansBehaviourTree
{
	GENERATED_BODY()

	friend class UFabiansComposite;
	friend class UFabiansBehaviourTree;
	friend class UFabiansActiveSelector;
private:
	UPROPERTY()
	UFabiansBehaviourTree* Root;
	UPROPERTY()
	UFabiansBehaviourTree* CurrentNode;
	UPROPERTY()
	TArray<UFabiansBehaviourTree*> NodeStack;

	UFabiansComposite* Composite;

	void GetAddChild(UFabiansBehaviourTree* Child);
public:

	UFabiansBehaviourTreeBuilder* ActiveSelector();
	UFabiansBehaviourTreeBuilder* Sequence();
	UFabiansBehaviourTreeBuilder* Condition(UFabiansCondtion* ConditionNode);
	UFabiansBehaviourTreeBuilder* Action(UFabiansAction* ActionNode);
	UFabiansBehaviourTreeBuilder* End();
	UFabiansBehaviourTree* Build();
	UFabiansBehaviourTreeBuilder* Filter(TSubclassOf<UFabiansDecorator> DecoratorClass, int32 Parameter);


	/*void ActiveSelector();
	void Sequence();
	void Action(UFabiansAction* ActionNode);
	UFabiansBehaviourTree* Build();
	UFabiansBehaviourTreeBuilder();
	void Condition(UFabiansCondtion* ConditionNode);*/

};
