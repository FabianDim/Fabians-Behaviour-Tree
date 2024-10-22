// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansBehaviourTreeBuilder.h"

#include "FabiansAction.h"
#include "FabiansSequence.h"



void UFabiansBehaviourTreeBuilder::GetAddChild(UFabiansBehaviourTree* Child)
{
    if (!Child)
    {
        UE_LOG(LogTemp, Warning, TEXT("GetAddChild: Child is null."));
        return;
    }

    if (!CurrentNode)
    {
        if (!Root)
        {
            Root = Child;
            CurrentNode = Root;
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("GetAddChild: CurrentNode is null but Root is already set."));
        }
        return;
    }

    // Try casting CurrentNode to Composite or Decorator to add child
    if (UFabiansComposite* CompositeNode = Cast<UFabiansComposite>(CurrentNode))
    {
        CompositeNode->AddChild(Child);
    }
    else if (UFabiansDecorator* DecoratorNode = Cast<UFabiansDecorator>(CurrentNode))
    {
        if (!DecoratorNode)
        {
            DecoratorNode->SetChild(Child);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("GetAddChild: Decorator node already has a child."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GetAddChild: Cannot add child to node of type %s."), *CurrentNode->GetClass()->GetName());
    }
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::ActiveSelector()
{
    UFabiansActiveSelector* SelectorNode = NewObject<UFabiansActiveSelector>(this);
    if (!SelectorNode)
    {
        UE_LOG(LogTemp, Error, TEXT("ActiveSelector: Failed to create UFabiansActiveSelector."));
        return this;
    }

    GetAddChild(SelectorNode);
    NodeStack.Add(CurrentNode);
    CurrentNode = SelectorNode;
    return this;
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::Sequence()
{
    UFabiansSequence* SequenceNode = NewObject<UFabiansSequence>(this);
    if (!SequenceNode)
    {
        UE_LOG(LogTemp, Error, TEXT("Sequence: Failed to create UFabiansSequence."));
        return this;
    }

    GetAddChild(SequenceNode);
    NodeStack.Push(CurrentNode);
    CurrentNode = SequenceNode;
    return this;
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::Condition(UFabiansCondtion* ConditionNode)
{
    if (!ConditionNode)
    {
        UE_LOG(LogTemp, Warning, TEXT("Condition: ConditionNode is null."));
        return this;
    }

    GetAddChild(ConditionNode);
    return this;
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::Action(UFabiansAction* ActionNode)
{
    if (!ActionNode)
    {
        UE_LOG(LogTemp, Warning, TEXT("Action: ActionNode is null."));
        return this;
    }

    GetAddChild(ActionNode);
    return this;
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::End()
{
    if (NodeStack.Num() > 0)
    {
        CurrentNode = NodeStack.Pop();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("End: NodeStack is empty. Cannot pop."));
        CurrentNode = nullptr;
    }
    return this;
}

UFabiansBehaviourTree* UFabiansBehaviourTreeBuilder::Build()
{
    if (Root)
    {
        return Root;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Build: Root is null."));
        return nullptr;
    }
}

UFabiansBehaviourTreeBuilder* UFabiansBehaviourTreeBuilder::Filter(TSubclassOf<UFabiansDecorator> DecoratorClass, int32 Parameter)
{
    if (!DecoratorClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("Filter: DecoratorClass is null."));
        return this;
    }

    UFabiansDecorator* DecoratorNode = NewObject<UFabiansDecorator>(this, DecoratorClass);
    if (!DecoratorNode)
    {
        UE_LOG(LogTemp, Error, TEXT("Filter: Failed to create Decorator node."));
        return this;
    }

    // Set parameters based on the decorator type
    if (URepeat* RepeatNode = Cast<URepeat>(DecoratorNode))
    {
        RepeatNode->SetCount(Parameter);
    }
    // Add handling for other decorators if needed

    // Add the decorator node to the current node
    GetAddChild(DecoratorNode);

    // Push the current node to the stack and set the decorator node as the current node
    NodeStack.Push(CurrentNode);
    CurrentNode = DecoratorNode;

    return this;
}

UFabiansBehaviourTreeBuilder::UFabiansBehaviourTreeBuilder()
{
    Root = nullptr;
    CurrentNode = nullptr;
    NodeStack.Empty();
}

/*
UFabiansBehaviourTree* UFabiansBehaviourTreeBuilder::ActiveSelector()
{
	UFabiansActiveSelector* ActiveSelector = NewObject<UFabiansActiveSelector>(this);

	ActiveSelector->update();
}

void UFabiansBehaviourTreeBuilder::Sequence()
{
	UFabiansSelector* Selector = NewObject<UFabiansSelector>(this);
	Selector->update();
}

void UFabiansBehaviourTreeBuilder::Action(UFabiansAction* ActionNode)
{
	UFabiansAction* Action = NewObject<UFabiansAction>(this);
	Action->update();
}

UFabiansBehaviourTree* UFabiansBehaviourTreeBuilder::Build()
{
	UFabiansBehaviourTree* BehaviorTree = NewObject<UFabiansBehaviourTree>(this);
	BehaviorTree->Tick();
	return BehaviorTree;
}

UFabiansBehaviourTreeBuilder::UFabiansBehaviourTreeBuilder()
{
	Root = nullptr;
	CurrentNode = nullptr;
	NodeStack.Empty();
}

void UFabiansBehaviourTreeBuilder::Condition(UFabiansCondtion* ConditionNode)
{
	UFabiansCondtion* Condition = NewObject<UFabiansCondtion>(this);
	Condition->update();
}
*/