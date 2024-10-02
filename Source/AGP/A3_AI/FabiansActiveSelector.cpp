// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansActiveSelector.h"

void AFabiansActiveSelector::OnInitialise()
{
	FBehaviors::TIterator Prev = CurrentIterator;
}

bool operator!=(const TArray<AFabiansBehaviourTree*>::TIterator& Lhs, const TCheckedPointerIterator<TArray<AFabiansBehaviourTree*>::ElementType, TArray<AFabiansBehaviourTree*>::SizeType>& End);

EStatus AFabiansActiveSelector::update()
{
	FBehaviors::TIterator Previous = CurrentIterator;

	AFabiansSelector::OnInitialise();
	EStatus Result = AFabiansSelector::update();

	if(Previous != Children.end())
	{
		(*Previous)->OnTerminate(EStatus::Aborted);
	}
	return Result;
}
