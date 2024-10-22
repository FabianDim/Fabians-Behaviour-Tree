#include "FabiansDecorator.h"

UFabiansDecorator::UFabiansDecorator(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Any other initialization code
	BehaviourTreeChild = nullptr;
}

void UFabiansDecorator::SetChild(UFabiansBehaviourTree* Child)
{
	BehaviourTreeChild = Child; //Decorators are single child parent nodes. No need to iterate.
}

EStatus URepeat::update()
{
	while(true)
	{
		BehaviourTreeChild->Tick();
		if(BehaviourTreeChild->GetStatus() == EStatus::Running) break;
		if(BehaviourTreeChild->GetStatus() == EStatus::Failure) return EStatus::Failure;
		if(Counter == Limit) return EStatus::Success;
	}
	return EStatus::Invalid;
}

void URepeat::SetCount(int count)
{
	Limit = count;
}

void URepeat::OnInitialise()
{
	Counter = 0;
}
