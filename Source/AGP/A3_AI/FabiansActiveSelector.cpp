// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansActiveSelector.h"

void UFabiansActiveSelector::OnInitialise()
{
	CurrentChildIndex = 0;
}


EStatus UFabiansActiveSelector::update() //the active selector continuously monitors its child behaviours and allows for
//dynamic changes in which child is active. Active selector can switch to a higher priority child if conditions change.
{
	FBehaviors::TIterator Previous(Children); //Saves the previous active child before updates

	UFabiansSelector::OnInitialise();
	EStatus Result = UFabiansSelector::update();

	if(Previous && Previous.GetIndex() < Children.Num())
	{
		(*Previous)->OnTerminate(EStatus::Aborted);
	}
	return Result;
}
