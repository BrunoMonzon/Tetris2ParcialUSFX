// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Estado.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstado : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRIS_UE4_API IEstado
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//The pure virtual functions of the State
	virtual void InsertCoin() = 0; // insertar moneda
	virtual void RejectCoin() = 0; // rechazar moneda
	virtual void PullLever() = 0; // tirar de la palanca
	virtual void Payout() = 0; // pago
	virtual void RestockDollars() = 0; // reponer dolares
	virtual FString ToString() = 0; // convertir a string
	virtual void SetSlotMachine(class AMaquinaTragamonedasEscuelaVieja* SlotMachine) = 0; // establecer la maquina tragamonedas
};
