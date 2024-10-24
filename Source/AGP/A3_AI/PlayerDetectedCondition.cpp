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
	PlayerCharacter = EnemyCharacter->FindPlayer();
	
	if (!EnemyCharacter)
	{
		return EStatus::Failure;
	}
	return PlayerCharacter ? EStatus::Success : EStatus::Failure;//if we find the player using the find player method we return the estatus to use in the other class
}

UPlayerNotDetectedCondition::UPlayerNotDetectedCondition(): EnemyCharacter(nullptr), PlayerCharacter(nullptr)
{
}

EStatus UPlayerNotDetectedCondition::update()
{
	PlayerCharacter = EnemyCharacter->FindPlayer();
	
	if (!EnemyCharacter)
	{
		return EStatus::Failure;
	}
	return PlayerCharacter ? EStatus::Failure : EStatus::Success;
}

