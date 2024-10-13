// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansSequence.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "PlayerDetectedCondition.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UPlayerDetectedCondition : public UFabiansFilter
{
	GENERATED_BODY()

public:
	UPlayerDetectedCondition();

	virtual EStatus update() override;

	UPROPERTY()
	AEnemyCharacter* EnemyCharacter;
	
};
