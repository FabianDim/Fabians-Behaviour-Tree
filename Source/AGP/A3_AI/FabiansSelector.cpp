#include "FabiansSelector.h"

void AFabiansSelector::OnInitialise()
{
}

EStatus AFabiansSelector::update()
{
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



