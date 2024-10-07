// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolAction.h"

UPatrolAction::UPatrolAction(): EnemyCharacter(nullptr)
{
	CurrentStatus = EStatus::Invalid;
}

EStatus UPatrolAction::update()
{
	if(!EnemyCharacter)
	{
		return EStatus::Failure;
	}
	EnemyCharacter->GetTickPatrol();
	return EStatus::Running;
}
