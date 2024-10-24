// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolAction.h"

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
	
	if(PlayerNotDetectedCondition->update() == EStatus::Success)
	{
		EnemyCharacter->TickPatrol();
		return EStatus::Running;
	}
	return EStatus::Failure;
	
}
