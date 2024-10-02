// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabiansSelector.h"
#include "FabiansActiveSelector.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API AFabiansActiveSelector : public AFabiansSelector
{
	GENERATED_BODY()

	virtual void OnInitialise() override;
	EStatus update() override;
	
};
