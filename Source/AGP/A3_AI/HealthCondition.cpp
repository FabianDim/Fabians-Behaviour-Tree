#include "HealthCondition.h"
#include "AGP/Characters/EnemyCharacter.h"
#include "AGP/Characters/HealthComponent.h"

UHealthCondition::UHealthCondition()
	: EnemyCharacter(nullptr)
{
}

EStatus UHealthCondition::update()
{
	if (!EnemyCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("HealthCondition: EnemyCharacter is null"));
		return EStatus::Failure;
	}

	float CurrentHealth = EnemyCharacter->HealthComponent->GetCurrentHealth(); // Ensure you have a method to get current health
	if (CurrentHealth <= HealthThreshold)
	{
		return EStatus::Success;
	}
	else
	{
		return EStatus::Failure;
	}

}