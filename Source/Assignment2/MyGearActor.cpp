// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGearActor.h"

// Sets default values
AMyGearActor::AMyGearActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Scene
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("GearActorRootScene"));
	SetRootComponent(RootScene);

	// Gear, hook and anchor mesh
	GearMesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GearMesh1"));
	GearMesh1->SetupAttachment(RootScene);
	HookMesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HookMesh1"));
	HookMesh1->SetupAttachment(GearMesh1);
	AnchorMesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AnchorMesh1"));
	AnchorMesh1->SetupAttachment(HookMesh1);
	
	GearMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GearMesh2"));
	GearMesh2->SetupAttachment(RootScene);
	HookMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HookMesh2"));
	HookMesh2->SetupAttachment(GearMesh2);
	AnchorMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AnchorMesh2"));
	AnchorMesh2->SetupAttachment(HookMesh2);

	GearMesh3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GearMesh3"));
	GearMesh3->SetupAttachment(RootScene);
	HookMesh3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HookMesh3"));
	HookMesh3->SetupAttachment(GearMesh3);
	AnchorMesh3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AnchorMesh3"));
	AnchorMesh3->SetupAttachment(HookMesh3);
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
	
	FRotator GearRotation1 = FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f);
	GearMesh1->AddLocalRotation(GearRotation1);

	FRotator GearRotation2 = FRotator(0.0f, -RotationSpeed * DeltaTime, 0.0f);
	GearMesh2->AddLocalRotation(GearRotation2);

	FRotator GearRotation3 = FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f);
	GearMesh3->AddLocalRotation(GearRotation3);

}

