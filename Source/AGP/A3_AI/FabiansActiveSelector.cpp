// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansActiveSelector.h"

void UFabiansActiveSelector::OnInitialise()
{
	CurrentChildIndex = 0;
}

//bool operator!=(const TArray<UFabiansBehaviourTree*>::TIterator& Lhs, const TCheckedPointerIterator<TArray<UFabiansBehaviourTree*>::ElementType, TArray<UFabiansBehaviourTree*>::SizeType>& End);

EStatus UFabiansActiveSelector::update()
{
	FBehaviors::TIterator Previous(Children);

	UFabiansSelector::OnInitialise();
	EStatus Result = UFabiansSelector::update();

	if(Previous && Previous.GetIndex() < Children.Num())
	{
		(*Previous)->OnTerminate(EStatus::Aborted);
	}
	return Result;
}
