// Fill out your copyright notice in the Description page of Project Settings.


#include "EvadeAction.h"

#include "HealthCondition.h"

EStatus UEvadeAction::update()
{
	EnemyCharacter->TickEvade();
	UE_LOG(LogTemp, Error, TEXT("Evade Action is Running"));
	return EStatus::Running; // Return Running to indicate ongoing action
}

