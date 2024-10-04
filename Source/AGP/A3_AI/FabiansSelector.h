#pragma once
#include "FabiansComposite.h"
#include "CoreMinimal.h" // Core functionality of Unreal Engine
#include "FabiansSelector.generated.h"
UCLASS()
class UFabiansSelector : public UFabiansComposite
{
	GENERATED_BODY() 
public:

protected:	
	virtual void OnInitialise();
	int32 CurrentChildIndex;
	virtual EStatus update() override;
	/*FBehaviors::TIterator CurrentIterator;*/

	UFabiansSelector();
};
