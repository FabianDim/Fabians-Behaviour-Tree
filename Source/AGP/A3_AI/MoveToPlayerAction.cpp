// MoveToPlayerAction.cpp

#include "MoveToPlayerAction.h"
#include "MoveToPlayerAction.h"

#include "PlayerDetectedCondition.h"
#include "AGP/Characters/EnemyCharacter.h"

UMoveToPlayerAction::UMoveToPlayerAction()
{
	EnemyCharacter = nullptr;
	CurrentStatus = EStatus::Invalid;
}

EStatus UMoveToPlayerAction::update()
{
	
	if(PlayerDetectedCondition && PlayerDetectedCondition->update() == EStatus::Success)
	{
		EnemyCharacter->TickEngage();
		return EStatus::Running;
	}
	return EStatus::Failure;
}