#include "FabiansSelector.h"

void AFabiansSelector::OnInitialise()
{
	CurrentChildIndex = 0;
}

EStatus AFabiansSelector::update()
{
	while(true)
	{
		if(CurrentChildIndex >= Children.Num())
		{
			return EStatus::Failure;
		}

		EStatus Status = Children[CurrentChildIndex]->Tick();

		if(Status != EStatus::Failure)
		{
			return Status;
		}
		CurrentChildIndex++;
	}
	return EStatus::Invalid;
}



