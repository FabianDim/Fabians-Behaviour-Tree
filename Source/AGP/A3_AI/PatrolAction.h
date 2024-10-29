// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansDecorator.h"
#include "FabiansSequence.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "PatrolAction.generated.h"

/**
 * 
 */

class UPlayerNotDetectedCondition;
UCLASS()
class AGP_API UPatrolAction : public UFabiansSequence
{

	friend class AEnemyCharacter;
	friend class UMoveToPlayerAction;
	GENERATED_BODY()
public:
	// Constructor with FObjectInitializer
	UPatrolAction(const FObjectInitializer& ObjectInitializer);

	virtual EStatus update() override;

	UPROPERTY()
	AEnemyCharacter* EnemyCharacter;
	UPROPERTY()
	APlayerCharacter* PlayerCharacter;
	
protected:
	EStatus CurrentStatus;

	UPROPERTY()
	UPlayerNotDetectedCondition* PlayerNotDetectedCondition;
	UPROPERTY()
	UPlayerDetectedCondition* PlayerDetected;
	UPROPERTY()
	UMoveToPlayerAction* MoveToPlayerAction;
};
