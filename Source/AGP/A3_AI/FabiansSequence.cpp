// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansSequence.h"



void AFabiansSequence::OnInitialise()
{
	CurrentChildIndex = 0;
	
}

EStatus AFabiansSequence::update()
{
	// Keep going until a child behaviour says it's running
	for (FBehaviors::TIterator It(Children); It; ++It)
	{
		// Use the iterator to call Tick() on each child
		EStatus Status = (*It)->Tick();

		if (Status != EStatus::Failure)
		{
			return Status; // Return if the child status is not Failure
		}
	}

	// If all children fail, return Failure
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

