// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansBehaviourTree.h"
#include "AGP/Characters/EnemyCharacter.h"

/*void UFabiansBehaviourTree::BeginPlay()
{
	AEnemyCharacter* Enemy = Cast<AEnemyCharacter>(GetPawn());
	if(Enemy)
	{
		RunBehaviorTree(Enemy->BTAsset);
	}
}*/

UFabiansBehaviourTree::UFabiansBehaviourTree(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), BehaviorComponent(nullptr), CurrentStatus(EStatus::Invalid)
{
}

EStatus UFabiansBehaviourTree::update()
{
	return EStatus::Invalid;
}

void UFabiansBehaviourTree::OnInitialise()
{
}

void UFabiansBehaviourTree::OnTerminate(EStatus Status)
{
	
}

bool UFabiansBehaviourTree::IsTerminated() const
{
	return CurrentStatus == EStatus::Success || CurrentStatus == EStatus::Failure;
}

bool UFabiansBehaviourTree::IsRunning() const
{
	return CurrentStatus == EStatus::Running;
}
EStatus UFabiansBehaviourTree::Tick()
{
	if(CurrentStatus != EStatus::Running) OnInitialise();
	CurrentStatus = update();
	if(CurrentStatus != EStatus::Running) OnTerminate(CurrentStatus);
	return CurrentStatus;
}

EStatus UFabiansBehaviourTree::GetStatus() const
{
	return CurrentStatus;
}

void UFabiansBehaviourTree::ChaseTarget()
{
}

void UFabiansBehaviourTree::Abort()
{
	OnTerminate(EStatus::Aborted);
	CurrentStatus = EStatus::Aborted;
}

/*UFabiansBehaviourTree::~UFabiansBehaviourTree()
{
}*/
