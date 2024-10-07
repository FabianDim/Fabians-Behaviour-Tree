// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerDetectedCondition.h"

UPlayerDetectedCondition::UPlayerDetectedCondition()
{
	CurrentStatus = EStatus::Invalid;
	EnemyCharacter = nullptr;
}

EStatus UPlayerDetectedCondition::update()
{
	if(!EnemyCharacter)
	{
		return EStatus::Failure;
	}
	if(EnemyCharacter->SensedCharacter)
	{
		return EStatus::Success;
	}
	else
	{
		return EStatus::Failure;
	}
}

