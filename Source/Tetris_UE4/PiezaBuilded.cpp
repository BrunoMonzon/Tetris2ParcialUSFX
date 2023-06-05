// Fill out your copyright notice in the Description page of Project Settings.


#include "PiezaBuilded.h"
#include "Pieces.h"
#include "BlockAgua.h"
#include "BlockDulce.h"
#include "BlockFuego.h"
#include "BlockGoma.h"
#include "BlockNatural.h"

// Sets default values
APiezaBuilded::APiezaBuilded()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APiezaBuilded::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APiezaBuilded::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APiezaBuilded::buildBlockAgua()
{
	if (Pieza != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pieza is null"));
		return;
	}
	Pieza->setBlockAgua();
}

void APiezaBuilded::buildBlockDulce()
{
	if (Pieza != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pieza is null"));
		return;
	}
	Pieza->setBlockDulce();
}

void APiezaBuilded::buildBlockFuego()
{
	if (Pieza != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pieza is null"));
		return;
	}
	Pieza->setBlockFuego();
}

void APiezaBuilded::buildBlockGoma()
{
	if (Pieza != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pieza is null"));
		return;
	}
	Pieza->setBlockGoma();
}

void APiezaBuilded::buildBlockNatural()
{
	if (Pieza != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pieza is null"));
		return;
	}
	Pieza->setBlockNatural();
}



