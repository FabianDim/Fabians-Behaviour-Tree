// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralLandscape.h"
#include "ProceduralMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "KismetProceduralMeshLibrary.h"
#include "AGP/Pathfinding/PathfindingSubsystem.h"

// Sets default values
AProceduralLandscape::AProceduralLandscape()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create and initialise the Procedural Mesh Component member variable.
	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Procedural Mesh"));
	// Set this procedural mesh as the root component of this actor.
	SetRootComponent(ProceduralMesh);
}

void AProceduralLandscape::ClearLandscape()
{
	Vertices.Empty();
	Triangles.Empty();
	UVCoords.Empty();
	if (ProceduralMesh)
	{
		ProceduralMesh->ClearMeshSection(0);
	}
	UKismetSystemLibrary::FlushPersistentDebugLines(GetWorld());
}

// Called when the game starts or when spawned
void AProceduralLandscape::BeginPlay()
{
	Super::BeginPlay();

	// CreateSimplePlane();
}

void AProceduralLandscape::CreateSimplePlane()
{
	Vertices.Add(FVector(0.0f, 0.0f, FMath::RandRange(-500.0f, 500.0f)));
	Vertices.Add(FVector(1000.0f, 0.0f, FMath::RandRange(-500.0f, 500.0f)));
	Vertices.Add(FVector(0.0f, 1000.0f, FMath::RandRange(-500.0f, 500.0f)));
	Vertices.Add(FVector(1000.0f, 1000.0f, FMath::RandRange(-500.0f, 500.0f)));
	for (const FVector& Pos : Vertices)
	{
		DrawDebugSphere(GetWorld(), Pos, 50.0f, 16, FColor::Blue, true, -1, 0, 5.0f);
	}

	Triangles.Add(0);
	Triangles.Add(2);
	Triangles.Add(1);
	Triangles.Add(1);
	Triangles.Add(2);
	Triangles.Add(3);
	
	UVCoords.Add(FVector2D(0.0f, 0.0f));
	UVCoords.Add(FVector2D(1.0f, 0.0f));
	UVCoords.Add(FVector2D(0.0f, 1.0f));
	UVCoords.Add(FVector2D(1.0f, 1.0f));

	if (ProceduralMesh)
	{
		ProceduralMesh->CreateMeshSection(0, Vertices, Triangles, TArray<FVector>(), UVCoords,
			TArray<FColor>(), TArray<FProcMeshTangent>(), true);
	}
}

void AProceduralLandscape::GenerateLandscape()
{
	PerlinOffset = FMath::RandRange(-1'000'000.0f, 1'000'000.0f);
	for (int32 Y = 0; Y < Height; Y++)
	{
		for (int32 X = 0; X < Width; X++)
		{
			FVector VertexLocation = FVector(X * VertexSpacing, Y * VertexSpacing, 0.0f);
			float ZHeight = FMath::PerlinNoise2D(
				FVector2D(VertexLocation.X * PerlinRoughness + PerlinOffset, VertexLocation.Y * PerlinRoughness + PerlinOffset));
			ZHeight *= PerlinScale;
			VertexLocation.Z = ZHeight;
			Vertices.Add(VertexLocation);
			UVCoords.Add(FVector2D(X, Y));
			
			// DrawDebugSphere(GetWorld(), VertexLocation, 50.0f, 8, FColor::Blue,
			// 	true, -1, 0, 10.0f);

			// Ignore adding triangles if we are at the far left or top of the grid.
			if (X == Width - 1 || Y == Height - 1) continue;
			Triangles.Add(Y * Width + X);
			Triangles.Add((Y+1) * Width + X);
			Triangles.Add(Y * Width + X+1);
			Triangles.Add(Y * Width + X+1);
			Triangles.Add((Y+1) * Width + X);
			Triangles.Add((Y+1) * Width + X+1);
		}
	}

	if (ProceduralMesh)
	{
		TArray<FVector> Normals;
		TArray<FProcMeshTangent> Tangents;
		UKismetProceduralMeshLibrary::CalculateTangentsForMesh(Vertices, Triangles, UVCoords, Normals, Tangents);
		ProceduralMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UVCoords,
			TArray<FColor>(), Tangents, true);
		if (UPathfindingSubsystem* PathfindingSubsystem = GetWorld()->GetSubsystem<UPathfindingSubsystem>())
		{
			PathfindingSubsystem->PlaceProceduralNodes(Vertices, Width, Height);
		} else
		{
			UE_LOG(LogTemp, Error, TEXT("Can't find the pathfinding subsystem"))
		}
	}
}

bool AProceduralLandscape::ShouldTickIfViewportsOnly() const
{
	return true;
}

// Called every frame
void AProceduralLandscape::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bShouldRegenerate)
	{
		ClearLandscape();
		//CreateSimplePlane();
		GenerateLandscape();
		bShouldRegenerate = false;
	}
}

