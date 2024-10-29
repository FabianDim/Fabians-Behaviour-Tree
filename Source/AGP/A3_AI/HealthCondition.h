#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "HealthCondition.generated.h"

UCLASS()
class UHealthCondition : public UFabiansBehaviourTree
{
	GENERATED_BODY()

public:
	UHealthCondition();

	virtual EStatus update() override;

	UPROPERTY()
	class AEnemyCharacter* EnemyCharacter;
	void SetHealthThreshold(float Threshold) { HealthThreshold = Threshold; }

private:
	float HealthThreshold = 40.0f; // Set your desired threshold here
};
