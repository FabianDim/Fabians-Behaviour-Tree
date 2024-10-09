// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansDecorator.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "PatrolAction.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UPatrolAction : public UFabiansDecorator
{
	GENERATED_BODY()

public:
	// Constructor with FObjectInitializer
	UPatrolAction(const FObjectInitializer& ObjectInitializer);

	virtual EStatus update() override;

	UPROPERTY()
	AEnemyCharacter* EnemyCharacter;
	
protected:
	EStatus CurrentStatus;
};
