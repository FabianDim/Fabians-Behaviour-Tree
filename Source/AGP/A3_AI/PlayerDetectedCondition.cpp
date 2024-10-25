// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerDetectedCondition.h"

UPlayerDetectedCondition::UPlayerDetectedCondition()
{
	CurrentStatus = EStatus::Invalid;
	EnemyCharacter = nullptr;
	PlayerCharacter = nullptr;
}

EStatus UPlayerDetectedCondition::update()
{
	if (!EnemyCharacter)
	{
		return EStatus::Failure;
	}

	PlayerCharacter = EnemyCharacter->FindPlayer();
	return PlayerCharacter ? EStatus::Success : EStatus::Failure;
}

UPlayerNotDetectedCondition::UPlayerNotDetectedCondition(): EnemyCharacter(nullptr), PlayerCharacter(nullptr)
{
}

EStatus UPlayerNotDetectedCondition::update()
{
	if (!EnemyCharacter)
	{
		return EStatus::Failure;
	}

	PlayerCharacter = EnemyCharacter->FindPlayer();
	return PlayerCharacter ? EStatus::Failure : EStatus::Success;
}
