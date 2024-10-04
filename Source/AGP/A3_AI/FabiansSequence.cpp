// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansSequence.h"



void AFabiansSequence::OnInitialise()
{
	CurrentChildIndex = 0;
	
}

EStatus AFabiansSequence::update()
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
void AFabiansFilter::AddCondition(AFabiansBehaviourTree* Condition)
{
	Children.Insert(Condition, 0);
}
void AFabiansFilter::AddAction(AFabiansBehaviourTree* Action)
{
	Children.Add(Action);
}

