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
	EnemyCharacter->TickEngage();
	//UE_LOG(LogTemp, Error, TEXT("Move to player Action"));
	return EStatus::Running;
}