// Fill out your copyright notice in the Description page of Project Settings.
// ShootAction.h

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansSequence.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "UShootAction.generated.h"

UCLASS()
class AGP_API UShootAction : public UFabiansFilter
{
	GENERATED_BODY()

public:
	UShootAction();

	virtual EStatus update() override;

	UPROPERTY()
	AEnemyCharacter* EnemyCharacter;
};