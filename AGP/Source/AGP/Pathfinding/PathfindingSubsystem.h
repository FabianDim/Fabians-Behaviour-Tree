// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PathfindingSubsystem.generated.h"

class ANavigationNode;
/**
 * 
 */
UCLASS()
class AGP_API UPathfindingSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:

	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	/**
	 * Will get all of the world positions of the nodes in the navigation system.
	 * @return The world positions of all of the nodes in the navigation system.
	 */
	TArray<FVector> GetWaypointPositions() const;
	/**
	 * Will retrieve a path from the StartLocation, to a random position in the world's navigation system.
	 * @param StartLocation The location that the path will start at.
	 * @return An array of vector positions representing the steps along the path, in reverse order.
	 */
	TArray<FVector> GetRandomPath(const FVector& StartLocation);
	/**
	 * Will retrieve a path from the StartLocation, to the TargetLocation
	 * @param StartLocation The location that the path will start at.
	 * @param TargetLocation A location near where the path will end at.
	 * @return An array of vector positions representing the steps along the path, in reverse order.
	 */
	TArray<FVector> GetPath(const FVector& StartLocation, const FVector& TargetLocation);
	/**
	 * Will retrieve a path from the StartLocation, to a position far away from the TargetLocation
	 * @param StartLocation The location that the path will start at.
	 * @param TargetLocation The location that will be used to determine a position far away from.
	 * @return An array of vector positions representing the steps along the path, in reverse order.
	 */
	TArray<FVector> GetPathAway(const FVector& StartLocation, const FVector& TargetLocation);

	// Procedural Map Logic
	/**
	 * Will place down navigation nodes at the vertex positions, excluding the edge vertex positions and
	 * setup connections between all adjacent nodes. Will also make sure there are no other nodes already
	 * placed. If there is they will be removed.
	 * @param LandscapeVertexData The mesh vertex positions of the landscape.
	 * @param MapWidth The grid width of the landscape.
	 * @param MapHeight The grid height of the landscape.
	 */
	void PlaceProceduralNodes(const TArray<FVector>& LandscapeVertexData, int32 MapWidth, int32 MapHeight);

protected:
	
	TArray<ANavigationNode*> Nodes;

	// Procedural Map Logic
	TArray<ANavigationNode*> ProcedurallyPlacedNodes;

private:

	void PopulateNodes();
	void RemoveAllNodes();
	ANavigationNode* GetRandomNode();
	ANavigationNode* FindNearestNode(const FVector& TargetLocation);
	ANavigationNode* FindFurthestNode(const FVector& TargetLocation);
	TArray<FVector> GetPath(ANavigationNode* StartNode, ANavigationNode* EndNode);
	static TArray<FVector> ReconstructPath(const TMap<ANavigationNode*, ANavigationNode*>& CameFromMap, ANavigationNode* EndNode);
	
};
