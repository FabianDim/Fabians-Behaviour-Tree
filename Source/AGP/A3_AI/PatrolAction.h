// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "PatrolAction.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UPatrolAction : public UFabiansBehaviourTree
{
	GENERATED_BODY()
	UPatrolAction();
public:
	virtual EStatus update() override;

	UPROPERTY()
	AEnemyCharacter* EnemyCharacter;
	
};
