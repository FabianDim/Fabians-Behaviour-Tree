// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansSequence.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "EvadeAction.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UEvadeAction : public UFabiansSequence
{
	GENERATED_BODY()
friend class AEnemyCharacter;
public:
	virtual EStatus update() override;
	UPROPERTY()
	UPlayerDetectedCondition* PlayerDetected;

protected:
	UPROPERTY()
	AEnemyCharacter* EnemyCharacter;

	UPROPERTY()
	UHealthCondition* HealthCondition;

	
	
};
