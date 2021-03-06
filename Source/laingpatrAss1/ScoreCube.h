// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScoreCube.generated.h"

UCLASS()
class LAINGPATRASS1_API AScoreCube : public AActor
{
    GENERATED_BODY()

public: 
    // Sets default values for this actor's properties
    AScoreCube();

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* VisualMesh;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public: 
    // Called every frame
    virtual void Tick(float DeltaTime) override;

};