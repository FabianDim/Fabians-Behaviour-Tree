// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansAction.h"

void UFabiansAction::GetAddChild(UFabiansBehaviourTree* Child)
{
		Composite->AddChild(Child);
}

EStatus UFabiansAction::update()
{
	return PerformAction();
}
