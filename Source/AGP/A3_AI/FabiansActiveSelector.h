// FabiansActiveSelector.h

#pragma once

#include "CoreMinimal.h"
#include "FabiansComposite.h"
#include "FabiansActiveSelector.generated.h"

UCLASS()
class AGP_API UFabiansActiveSelector : public UFabiansComposite
{
	GENERATED_BODY()

protected:
	virtual void OnInitialise() override;
	virtual EStatus update() override;

private:
	int32 CurrentChildIndex;
	int32 LastRunningChildIndex;
};