// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthCondition.h"

EStatus UHealthCondition::update()
{
	if(HealthComponent && EnemyCharacter && EnemyCharacter->HealthComponent->GetCurrentHealthPercentage() < 40)
	{
		UE_LOG(LogTemp, Error, TEXT("I am reaching the health condition"));
		return EStatus::Success;
		
	}
	return EStatus::Failure;
}

UHealthCondition::UHealthCondition(): EnemyCharacter(nullptr), HealthComponent(nullptr)
{
}
