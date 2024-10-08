// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansSequence.h"



void UFabiansSequence::OnInitialise()
{
	CurrentChildIndex = 0;
	
}

EStatus UFabiansSequence::update()
{
    while (CurrentChildIndex < Children.Num())
    {
        UFabiansBehaviourTree* CurrentChild = Children[CurrentChildIndex];

        if (!CurrentChild)
        {
            UE_LOG(LogTemp, Error, TEXT("Null child in sequence at index %d"), CurrentChildIndex);
            ++CurrentChildIndex;
            continue;
        }

        EStatus Status = CurrentChild->Tick();

        if (Status == EStatus::Running)
        {
            return EStatus::Running;
        }

        if (Status == EStatus::Failure)
        {
            return EStatus::Failure;
        }

        // Move to the next child
        ++CurrentChildIndex;
    }
    return EStatus::Success;
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

