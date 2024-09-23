// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponPickup.h"

#include "../Characters/PlayerCharacter.h"

void AWeaponPickup::OnPickupOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                    UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitInfo)
{
	//Super::OnPickupOverlap(OverlappedComponent, OtherActor, OtherComponent, OtherBodyIndex, bFromSweep, HitInfo);
	UE_LOG(LogTemp, Display, TEXT("Overlap event occurred on WeaponPickup"))

	if (ABaseCharacter* Player = Cast<ABaseCharacter>(OtherActor))
	{
		if (!Player->HasWeapon())
		{
			Player->EquipWeapon(true);
			Destroy();
		}
	}
}

void AWeaponPickup::GenerateWeaponPickup()
{
	int random = FMath::RandRange(0, 100);

	
	if(random > 5 && random < 15)
	{
		WeaponRarity = Legendary;

	}
	else if(random > 15 && random <30)
	{
		WeaponRarity = Master;
	}
	else if(random > 30 && random < 50)
	{
		WeaponRarity = Rare;
	}
	else if(random > 50)
	{
		WeaponRarity = Common;
	}
	
}

TArray<float> StatRandomizer(EWeaponRarity rarity)
{
	float AccGood = FMath::RandRange(0.98f, 1.0f);
	float FireGood = FMath::RandRange(0.05f, 0.2f);
	float BaseGood = FMath::RandRange(15.0f, 30.0f);
	int MagGood = FMath::RandRange(19, 101);

	float AccBad = FMath::RandRange(0.90f, 0.98f);
	float FireBad = FMath::RandRange(0.2f, 1.0f);
	float BaseBad = FMath::RandRange(5.0f, 15.0f);
	int MagBad = FMath::RandRange(0, 21);
	TArray<float> AllVariables{AccGood, FireGood, BaseGood, (float)MagGood, AccBad, FireBad, BaseBad, (float)MagBad };


	if(rarity == Legendary)
	{
		TArray<float> LegendaryArr;
		int index = FMath::RandRange(0, AllVariables.Num()-1);

		float num = AllVariables[index];
		while(LegendaryArr.Num() != 4)
		{
			if(!LegendaryArr.Contains(AllVariables[index]) && )
			{
			LegendaryArr.Add()
			}	
		}

	}
}



