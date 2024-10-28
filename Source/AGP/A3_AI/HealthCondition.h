// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansSequence.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "AGP/Characters/HealthComponent.h"
#include "HealthCondition.generated.h"

/**
 * Add something I believe the update is not finding the health of the correct character.
 */
UCLASS()
class AGP_API UHealthCondition : public UFabiansSequence
{
	GENERATED_BODY()

	friend class EvadeAction;
public:
	virtual EStatus update() override;

protected:
	UPROPERTY()
	AEnemyCharacter* EnemyCharacter;

	UPROPERTY()
	UHealthComponent* HealthComponent;

	UHealthCondition();
};
