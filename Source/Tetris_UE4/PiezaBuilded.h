// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaBuilder.h"
#include "PiezaBuilded.generated.h"

UCLASS()
class TETRIS_UE4_API APiezaBuilded : public AActor, public IPiezaBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiezaBuilded();

private:
	class APieces* Pieza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void buildBlockAgua() override;
	virtual void buildBlockDulce() override;
	virtual void buildBlockFuego() override;
	virtual void buildBlockGoma() override;
	virtual void buildBlockNatural() override;

};
