// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include "PiezaPlan.h"
#include <functional>
#include "Pieces.generated.h"

UCLASS()
class TETRIS_UE4_API APieces : public AActor, public IPiezaPlan
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APieces();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY()
    class USceneComponent* SceneComponent;
    
    UPROPERTY()
    class USoundCue* RotateSoundCue;
    
    UPROPERTY()
    class USoundCue* MoveLeftRightSoundCue;
    
    UPROPERTY()
    TArray<class UMaterial*> Colors;
    
    void DrawDebugLines();
    
    void TestRotate();
    void MoveLeft();
    void MoveRight();
    bool MoveDown(bool PlaySound=true);
    void Dismiss();
    

    bool CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck);

    // metodos constructores de blocks
    void setBlockAgua() override;
    void setBlockDulce() override;
    void setBlockFuego() override;
    void setBlockGoma() override;
    void setBlockNatural() override;

private:
    TArray<ABlock*> Blocks;
    void SpawnBlocks();
    

};
