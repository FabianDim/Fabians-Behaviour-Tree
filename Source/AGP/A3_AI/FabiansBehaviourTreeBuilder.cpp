// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansBehaviourTreeBuilder.h"

#include "FabiansAction.h"
#include "FabiansSequence.h"


void UFabiansBehaviourTreeBuilder::GetAddChild(UFabiansBehaviourTree* Child)
{
	if(Child)
	{
		Composite->AddChild(Child);		
	}
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::ActiveSelector()
{
	UFabiansActiveSelector* SelectorNode = NewObject<UFabiansActiveSelector>(this);
	if(CurrentNode && SelectorNode)
	{
		GetAddChild(CurrentNode);
		NodeStack.Add(CurrentNode);
		CurrentNode = SelectorNode;
	}
	return this;
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::Sequence()
{
	UFabiansSequence* SequenceNode = NewObject<UFabiansSequence>(this);
	if(CurrentNode && SequenceNode)
	{	
		GetAddChild(SequenceNode);
		NodeStack.Push(CurrentNode);
		CurrentNode = SequenceNode;
	}
	return this;
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::Condition(UFabiansCondtion* ConditionNode)
{
	if(ConditionNode)
	{
		GetAddChild(ConditionNode);
	}

	return this;
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::Action(UFabiansAction* ActionNode)
{
	if(ActionNode)
	{
		GetAddChild(ActionNode);
	}
	return this;
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::End()
{
	if (NodeStack.Num() > 0)
	{
		CurrentNode = NodeStack.Pop();
	}
	return this;
}

UFabiansBehaviourTree* UFabiansBehaviourTreeBuilder::Build()
{
	if(Root){
		return Root;
	}
	return nullptr;
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::Filter(TSubclassOf<UFabiansDecorator> DecoratorClass, int32 Parameter)
{
	UFabiansDecorator* DecoratorNode = NewObject<UFabiansDecorator>(this);

	// Set parameters based on the decorator type
	if (URepeat* RepeatNode = Cast<URepeat>(DecoratorNode))
	{
		RepeatNode->SetCount(Parameter);
	}
	// Add handling for other decorators if needed

	// Add the decorator node to the current node

	if(DecoratorNode && CurrentNode)
	{
		GetAddChild(DecoratorNode);
		NodeStack.Push(CurrentNode);
		CurrentNode = DecoratorNode;	
	}
	return this;
}

UFabiansBehaviourTreeBuilder::UFabiansBehaviourTreeBuilder()
{
	Root = nullptr;
	CurrentNode = nullptr;
	NodeStack.Empty();
}