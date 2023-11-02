// Fill out your copyright notice in the Description page of Project Settings.


#include "RopeWinderActor.h"

// Sets default values
ARopeWinderActor::ARopeWinderActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Scene
	RopeWinderRootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RopeWinderActorRootScene"));
	SetRootComponent(RopeWinderRootScene);

	// Mesh
	AnnulusMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AnnulusMesh"));
	AnnulusMesh->SetupAttachment(RopeWinderRootScene);

	KnobMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KnobMesh"));
	KnobMesh->SetupAttachment(AnnulusMesh);

	FrontMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontMesh"));
	FrontMesh->SetupAttachment(RopeWinderRootScene);
}

// Called when the game starts or when spawned
void ARopeWinderActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARopeWinderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

