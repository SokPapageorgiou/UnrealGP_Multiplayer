// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractIF.h"
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
class UNREALGP_API AColorCubeBase : public AActor, public IInteractIF
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AColorCubeBase();

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void ChangeColor();	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
    TMap<EColors, UMaterialInterface*> MaterialsMap;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* CubeComponent;

private:

	UPROPERTY(ReplicatedUsing = Rep_CurrentColor)
	EColors CurrentColor;

	UFUNCTION()
	void Rep_CurrentColor();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void Interact_Implementation(ACharacter* Interactor) override;
	
};
