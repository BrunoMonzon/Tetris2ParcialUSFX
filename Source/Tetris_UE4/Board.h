// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Pieces.h"
#include "Escenario.h"
#include "Board.generated.h"

UCLASS()
class TETRIS_UE4_API ABoard : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoard();


    //PATRON SINGLETON: Se crea una instancia de la clase Board para poder acceder a sus metodos desde otras clases sin necesidad de crear otra instancia
    UPROPERTY()
        ABoard* Instancia;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void Rotate(); // rota 90 grados 
    void MoveLeft();  // mueve a la izquierda
    void MoveRight(); // mueve a la derecha
    void MoveDown(); //  mueve hacia abajo
    void NewPieces(); //  crea una nueva pieza
    void CheckLine(); // chequea si hay lineas completas y las elimina
    void MoveDownToEnd(); // mueve la pieza hasta el final
public:
    UPROPERTY()
    APieces* CurrentPieces;
    
    UPROPERTY()
    class USoundCue* LineRemoveSoundCue;
    
    UPROPERTY()
    class USoundCue* MoveToEndSoundCue;
    
    UPROPERTY()
    class USoundCue* GameOverSoundCue;
    
    UPROPERTY()
    class USoundCue* GameStartSoundCue;

    UPROPERTY()
    AEscenario* Escenario;

    UPROPERTY()
    AEscenario* Escen;

private:
    enum PiecesStatus { PS_NOT_INITED, PS_MOVING, PS_GOT_BOTTOM};
    PiecesStatus Status = PS_NOT_INITED;
    
    const float CoolDown = 0.5f;
    float CoolLeft = 0.5f;
    bool bGameOver = false;
    
    bool CheckGameOver();
};
