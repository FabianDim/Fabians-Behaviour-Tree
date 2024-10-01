// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansSequence.h"

AFabiansSequence::~AFabiansSequence()
{
}

void AFabiansSequence::OnInitialise()
{
	CurrentChildIndex = 0;
}


EStatus AFabiansSequence::update()
{
	// Keep going until a child behaviour says it's running
	while (true)
	{
		// Check if we've reached the end of the Children array
		if (CurrentChildIndex >= Children.Num())
		{
			return EStatus::Failure;
		}

		// Call Tick() on the current child
		EStatus status = Children[CurrentChildIndex]->Tick();

		if (status != EStatus::Failure)
		{
			return status;
		}

		// Move to the next child
		CurrentChildIndex++;
	}
	return EStatus::Invalid;
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

