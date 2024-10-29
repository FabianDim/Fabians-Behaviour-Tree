#include "HealthCondition.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "AGP/Characters/HealthComponent.h"

UHealthCondition::UHealthCondition()
	: EnemyCharacter(nullptr)
{
}

EStatus UHealthCondition::update()
{
	if (EnemyCharacter && EnemyCharacter->HealthComponent)
	{
		float CurrentHealthPercentage = EnemyCharacter->HealthComponent->GetCurrentHealthPercentage();
		if (CurrentHealthPercentage < HealthThreshold)
		{
			UE_LOG(LogTemp, Error, TEXT("HealthCondition succeeded: Health is %f%%"), CurrentHealthPercentage);
			return EStatus::Success;
		}
	}
	return EStatus::Failure;
}
