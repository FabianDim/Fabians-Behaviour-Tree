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

EStatus AFabiansBehaviourTree::Tick()
{
	if(CurrentStatus != EStatus::Running) OnInitialise();
	CurrentStatus = update();
	if(CurrentStatus != EStatus::Running) OnTerminate(CurrentStatus);
	return CurrentStatus;
}

AFabiansBehaviourTree::~AFabiansBehaviourTree()
{
}
