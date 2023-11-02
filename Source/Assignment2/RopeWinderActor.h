// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RopeWinderActor.generated.h"

UCLASS()
class ASSIGNMENT2_API ARopeWinderActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARopeWinderActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RopeWinderRootScene;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AnnulusMesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* KnobMesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FrontMesh;
};
