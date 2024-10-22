// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansComposite.h"
#include "FabiansAction.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UFabiansAction : public UFabiansBehaviourTree
{
	GENERATED_BODY()
public:
	void GetAddChild(UFabiansBehaviourTree* Child);
	virtual EStatus PerformAction() PURE_VIRTUAL(UAction::PerformAction, return EStatus::Failure;);

	virtual EStatus update() override;

protected:
	UPROPERTY()
	UFabiansComposite* Composite;
};
