// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGearActor.h"

// Sets default values
AMyGearActor::AMyGearActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void AMyGearActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyGearActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

