// FabiansActiveSelector.cpp

#include "FabiansActiveSelector.h"
#include "FabiansBehaviourTree.h"


void UFabiansActiveSelector::OnInitialise()
{
	CurrentChildIndex = -1;
	LastRunningChildIndex = -1;
}

EStatus UFabiansActiveSelector::update()
{
	for (int32 i = 0; i < Children.Num(); ++i)
	{
		UFabiansBehaviourTree* Child = Children[i];
		if (!Child)
		{
			UE_LOG(LogTemp, Error, TEXT("Null child in active selector at index %d"), i);
			continue;
		}

		// If a higher-priority child is not the last running one, check if it needs to be aborted
		if (LastRunningChildIndex != -1 && i < LastRunningChildIndex)
		{
			UFabiansBehaviourTree* LastRunningChild = Children[LastRunningChildIndex];
			if (LastRunningChild && LastRunningChild->IsRunning())
			{
				LastRunningChild->Abort();
				LastRunningChildIndex = -1;
			}
		}

		EStatus Status = Child->Tick();

		if (Status == EStatus::Running)
		{
			LastRunningChildIndex = i;
			CurrentStatus = EStatus::Running;
			return EStatus::Running;
		}
		else if (Status == EStatus::Success)
		{
			LastRunningChildIndex = -1;
			CurrentStatus = EStatus::Success;
			return EStatus::Success;
		}
		// If child fails, continue to the next child
	}

	CurrentStatus = EStatus::Failure;
	return EStatus::Failure;
}