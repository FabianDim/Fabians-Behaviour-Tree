// Fill out your copyright notice in the Description page of Project Settings.


#include "EvadeAction.h"

#include "HealthCondition.h"

EStatus UEvadeAction::update()
{
	if(HealthCondition && HealthCondition->update() == EStatus::Success)
	{
		EnemyCharacter->TickEvade();
		return EStatus::Running;
	}
	return EStatus::Failure;
}
