// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansCondtion.h"

EStatus UFabiansCondtion::update()
{
	bool bResult = CheckCondition();
	if (bNegate)
	{
		bResult = !bResult;
	}
	return bResult ? EStatus::Success : EStatus::Failure;
}
