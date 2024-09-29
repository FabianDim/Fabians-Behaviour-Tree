#pragma once

#include "CoreMinimal.h"
#include "FabiansBehaviourTree.h"
#include "FabiansDecorator.generated.h"

/**
 * 
 */
UCLASS()
class AGP_API AFabiansDecorator : public AFabiansBehaviourTree
{
	GENERATED_BODY()

protected:
	AFabiansBehaviourTree* BehaviourTreeChild;

public:
	// Constructor with FObjectInitializer
	AFabiansDecorator(const FObjectInitializer& ObjectInitializer);

	// Function to set the child, since we can't pass it through the constructor
	void SetChild(AFabiansBehaviourTree* child)
	{
		BehaviourTreeChild = child;
	}
};
