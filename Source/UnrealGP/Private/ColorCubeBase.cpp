// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorCubeBase.h"


// Sets default values
AColorCubeBase::AColorCubeBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CubeComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
}

// Called when the game starts or when spawned
void AColorCubeBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AColorCubeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AColorCubeBase::ChangeColor()
{
	
}

