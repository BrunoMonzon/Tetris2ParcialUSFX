// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Block.generated.h"

UCLASS()
class TETRIS_UE4_API ABlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock();
	//BUILDER
	FString tipoBloque; // Tipo de bloque

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    UPROPERTY(EditAnywhere)
    UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere)
		int energia;
    // BUILDER
	FString getTipoBloque() {return tipoBloque;} // Devuelve el tipo de bloque
};
