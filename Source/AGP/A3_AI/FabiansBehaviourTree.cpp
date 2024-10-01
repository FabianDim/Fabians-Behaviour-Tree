// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansBehaviourTree.h"
#include "AGP/Characters/EnemyCharacter.h"

void AFabiansBehaviourTree::BeginPlay()
{
	AEnemyCharacter* Enemy = Cast<AEnemyCharacter>(GetPawn());
	if(Enemy)
	{
		RunBehaviorTree(Enemy->BTAsset);
	}
}

AFabiansBehaviourTree::AFabiansBehaviourTree(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), BehaviorComponent(nullptr), CurrentStatus(EStatus::Invalid)
{
}

EStatus AFabiansBehaviourTree::update()
{
	return EStatus::Invalid;
}

void AFabiansBehaviourTree::OnInitialise()
{
}

void AFabiansBehaviourTree::OnTerminate(EStatus Status)
{
	
}

bool AFabiansBehaviourTree::IsTerminated() const
{
	return CurrentStatus == EStatus::Success || CurrentStatus == EStatus::Failure;
}

bool AFabiansBehaviourTree::IsRunning() const
{
	return CurrentStatus == EStatus::Running;
}
EStatus AFabiansBehaviourTree::Tick()
{
	if(CurrentStatus != EStatus::Running) OnInitialise();
	CurrentStatus = update();
	if(CurrentStatus != EStatus::Running) OnTerminate(CurrentStatus);
	return CurrentStatus;
}

EStatus AFabiansBehaviourTree::GetStatus() const
{
	return CurrentStatus;
}

void AFabiansBehaviourTree::Abort()
{
	OnTerminate(EStatus::Aborted);
	CurrentStatus = EStatus::Aborted;
}

AFabiansBehaviourTree::~AFabiansBehaviourTree()
{
}
