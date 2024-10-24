// MoveToPlayerAction.cpp

#include "MoveToPlayerAction.h"
#include "AGP/Characters/EnemyCharacter.h"

UMoveToPlayerAction::UMoveToPlayerAction()
{
	EnemyCharacter = nullptr;
	CurrentStatus = EStatus::Invalid;
}

EStatus UMoveToPlayerAction::update()
{
	PlayerCharacter =  EnemyCharacter->FindPlayer();
	if(!PlayerCharacter || !EnemyCharacter)
	{
		return EStatus::Failure;
	}
	// Implement movementtowards player logic 
	EnemyCharacter->GetTickEngage();

	return EStatus::Running;
}