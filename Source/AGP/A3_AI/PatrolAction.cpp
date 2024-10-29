// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolAction.h"

#include "MoveToPlayerAction.h"
#include "PlayerDetectedCondition.h"

UPatrolAction::UPatrolAction(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	EnemyCharacter = nullptr;
	PlayerCharacter = nullptr;
	CurrentStatus = EStatus::Invalid;
}

EStatus UPatrolAction::update()
{
	EnemyCharacter->TickPatrol();
	UE_LOG(LogTemp, Error, TEXT("Patrol Action is Running"));
	return EStatus::Running; // Return Running to indicate ongoing action
}
