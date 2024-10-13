// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansParallel.h"

UFabiansParallel::UFabiansParallel(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), SuccessPolicy(), FailurePolicy()
// Call parent constructor
{
	// Initialization logic (if any)
}

EStatus UFabiansParallel::update() /*Like other composites, parallels are made up of multiple behaviours but these are
executed at the same time.*/
{
	size_t SuccessCount = 0, FaliureCount = 0;
	for(auto It : Children)
	{
		UFabiansBehaviourTree& b = *It; //for each node in the children array
		if(!b.IsTerminated()) b.Tick();
		if(b.GetStatus() == EStatus::Success) 
		{
			++SuccessCount;
			if(SuccessPolicy == RequireOne)
			{
				return EStatus::Success;
			}
		}
		if(b.GetStatus() == EStatus::Failure)
		{
			FaliureCount++;
			if(FailurePolicy == RequireOne)
			{
				return EStatus::Failure;
			}//adds successes and failures up
		}
	}
	if(FailurePolicy == RequireAll && FaliureCount == Children.Num())// if the successes or failures are all or one it
		//returns the corresponding status
	{
		return EStatus::Failure;
	}

	if(SuccessPolicy  == RequireAll && SuccessCount == Children.Num())
	{
		return EStatus::Success;
	}
	return EStatus::Running;
}

void UFabiansParallel::OnTerminate(EStatus Status)
{
	for (auto it: Children) {
		UFabiansBehaviourTree& b = *it;
		if (b.IsRunning()) b.Abort();
	}
}