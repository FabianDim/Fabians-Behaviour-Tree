// MoveToPlayerAction.h

#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansSequence.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "MoveToPlayerAction.generated.h"

UCLASS()
class AGP_API UMoveToPlayerAction : public UFabiansFilter
{
	GENERATED_BODY()

public:
	UMoveToPlayerAction();

	virtual EStatus update() override;

	UPROPERTY()
	AEnemyCharacter* EnemyCharacter;
};