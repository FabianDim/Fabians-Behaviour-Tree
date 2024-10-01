// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansSequence.h"

AFabiansSequence::~AFabiansSequence()
{
}

void AFabiansSequence::OnInitialise()
{
	CurrentChild = Children.begin();
}

EStatus AFabiansSequence::update()
{
	//Keep going until a child behaviour says it's running
	while(true)
	{
		EStatus status = (*(*CurrentChild))->Tick(); // Dereferences a nested iterator to call Tick() and retrieve the status.
		if(status != EStatus::Failure) return status;
		//continue search for fallback until last child
		if(CurrentChild == Children.end()) return EStatus::Failure;
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

