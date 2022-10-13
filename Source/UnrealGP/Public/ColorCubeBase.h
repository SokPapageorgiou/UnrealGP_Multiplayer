// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ColorCubeBase.generated.h"

UENUM(BlueprintType)
enum class EColors : uint8
{
	Red,
	Green,
	Blue
};

UCLASS()
class UNREALGP_API AColorCubeBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AColorCubeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
    TMap<EColors, UMaterialInterface*> Materials;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* CubeComponent;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void ChangeColor();	
};
