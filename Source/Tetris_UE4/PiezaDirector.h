// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaBuilder.h"
#include "PiezaDirector.generated.h"


UCLASS()
class TETRIS_UE4_API APiezaDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiezaDirector();

private:
	IPiezaBuilder* PiezaBuilder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Crea piezas
	void ConstructorPieza(FString _tipoBloque);

	// Set actor builder
	void SetPiezaBuilder(AActor* Builder);
};
