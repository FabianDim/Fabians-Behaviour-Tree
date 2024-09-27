// Fill out your copyright notice in the Description page of Project Settings.


#include "FabiansBehaviourTree.h"
#include "EnemyCharacter.h";

void AFabiansBehaviourTree::BeginPlay()
{
	AEnemyCharacter* Enemy = Cast<AEnemyCharacter>(GetPawn());
	if(Enemy)
	{
		RunBehaviorTree(Enemy->BTAsset);
	}
}

EStatus AFabiansBehaviourTree::update()
{
	
}

void AFabiansBehaviourTree::OnInitialise()
{
}

void AFabiansBehaviourTree::OnTerminate(EStatus Status)
{
}
