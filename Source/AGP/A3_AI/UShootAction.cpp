// ShootAction.cpp

#include "UShootAction.h"
#include "AGP/Characters/EnemyCharacter.h"

UShootAction::UShootAction()
{
	EnemyCharacter = nullptr;
	CurrentStatus = EStatus::Invalid;
}

EStatus UShootAction::update()
{
	if (!EnemyCharacter || !EnemyCharacter->HasWeapon())
	{
		return EStatus::Failure;
	}

	// Implement shooting logic
	EnemyCharacter->();

	return EStatus::Running;
}