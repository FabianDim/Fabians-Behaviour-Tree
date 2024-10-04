// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansSequence.h"



void UFabiansSequence::OnInitialise()
{
	CurrentChildIndex = 0;
	
}

EStatus UFabiansSequence::update()
{
	while(true)
	{
		for (FBehaviors::TIterator It(Children); It; ++It)
		{
			EStatus Status = (*It)->Tick();

			if (Status != EStatus::Failure)
			{
				return Status;
			}
		}
	}
	return EStatus::Failure;
}


/*Filter-------------------------------------------------------------------------------------------Filter*/
void UFabiansFilter::AddCondition(UFabiansBehaviourTree* Condition)
{
	Children.Insert(Condition, 0);
}
void UFabiansFilter::AddAction(UFabiansBehaviourTree* Action)
{
	Children.Add(Action);
}

