// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyGearActor.generated.h"

UCLASS()
class ASSIGNMENT2_API AMyGearActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyGearActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* GearMesh1;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* HookMesh1;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AnchorMesh1;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* GearMesh2;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* HookMesh2;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AnchorMesh2;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* GearMesh3;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* HookMesh3;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AnchorMesh3;

	UPROPERTY(EditAnywhere)
	float RotationSpeed = 50.0f;
	
};
