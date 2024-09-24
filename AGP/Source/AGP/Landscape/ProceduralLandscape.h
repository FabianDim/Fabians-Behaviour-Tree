// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralLandscape.generated.h"

struct FProcMeshTangent;
class UProceduralMeshComponent;

UCLASS()
class AGP_API AProceduralLandscape : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralLandscape();

	virtual bool ShouldTickIfViewportsOnly() const override;

	void ClearLandscape();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UProceduralMeshComponent* ProceduralMesh;

	void CreateSimplePlane();
	void GenerateLandscape();

	UPROPERTY()
	TArray<FVector> Vertices;
	UPROPERTY()
	TArray<int32> Triangles;
	UPROPERTY()
	TArray<FVector2D> UVCoords;

	// Landscape Generation Settings.
	UPROPERTY(EditAnywhere)
	int32 Width = 10;
	UPROPERTY(EditAnywhere)
	int32 Height = 10;
	UPROPERTY(EditAnywhere)
	float VertexSpacing = 1000.0f;

	UPROPERTY(EditAnywhere)
	float PerlinScale = 1000.0f;
	UPROPERTY(EditAnywhere)
	float PerlinRoughness = 0.00012f;
	UPROPERTY(VisibleAnywhere)
	float PerlinOffset;
	
	UPROPERTY(EditAnywhere)
	bool bShouldRegenerate;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
