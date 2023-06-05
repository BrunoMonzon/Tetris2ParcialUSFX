// Fill out your copyright notice in the Description page of Project Settings.


#include "PiezaDirector.h"

// Sets default values
APiezaDirector::APiezaDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APiezaDirector::ConstructorPieza(FString _tipoBloque)
{
	if (PiezaBuilder == nullptr)
	{
		UE_LOG(LogTemp , Warning, TEXT("PiezaBuilder is null"));
		return;
	}

	//Construir pieza
	if (_tipoBloque == "Agua")
	{
		PiezaBuilder->buildBlockAgua();
	}
	else if (_tipoBloque == "Dulce")
	{
		PiezaBuilder->buildBlockDulce();
	}
	else if (_tipoBloque == "Fuego")
	{
		PiezaBuilder->buildBlockFuego();
	}
	else if (_tipoBloque == "Goma")
	{
		PiezaBuilder->buildBlockGoma();
	}
	else if (_tipoBloque == "Natural")
	{
		PiezaBuilder->buildBlockNatural();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tipo de bloque no encontrado"));
	}	
}

void APiezaDirector::SetPiezaBuilder(AActor* Builder)
{
	PiezaBuilder = Cast<IPiezaBuilder>(Builder); // establecer el constructor de piezas

	if (PiezaBuilder == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("PiezaBuilder is null"));
	}
}



// Called when the game starts or when spawned
void APiezaDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APiezaDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

