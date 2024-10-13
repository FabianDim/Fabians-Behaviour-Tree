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
