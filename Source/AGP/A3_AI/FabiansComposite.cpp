// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansComposite.h"


void UFabiansComposite::AddChild(UFabiansBehaviourTree* Child)
{
	Children.Add(Child);
}
	