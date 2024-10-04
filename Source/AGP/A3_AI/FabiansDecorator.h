#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansDecorator.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API UFabiansDecorator : public UFabiansBehaviourTree
{
	GENERATED_BODY()

protected:
	UFabiansBehaviourTree* BehaviourTreeChild;

public:
	// Constructor with FObjectInitializer
	UFabiansDecorator(const FObjectInitializer& ObjectInitializer);

	// Function to set the child, since we can't pass it through the constructor
	void SetChild(UFabiansBehaviourTree* child)
	{
		BehaviourTreeChild = child;
	}
};
