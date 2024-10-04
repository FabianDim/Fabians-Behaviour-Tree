// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansActiveSelector.h"

void AFabiansActiveSelector::OnInitialise()
{
	CurrentChildIndex = 0;
}

bool operator!=(const TArray<AFabiansBehaviourTree*>::TIterator& Lhs, const TCheckedPointerIterator<TArray<AFabiansBehaviourTree*>::ElementType, TArray<AFabiansBehaviourTree*>::SizeType>& End);

EStatus AFabiansActiveSelector::update()
{
	FBehaviors::TIterator Previous(Children);

	AFabiansSelector::OnInitialise();
	EStatus Result = AFabiansSelector::update();

	if(Previous && Previous.GetIndex() < Children.Num())
	{
		(*Previous)->OnTerminate(EStatus::Aborted);
	}
	return Result;
}
