// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnemyGrunt.generated.h"

UCLASS()
class OCTODRAGON_API AEnemyGrunt : public APawn
{
	GENERATED_BODY()


public:
	// Sets default values for this pawn's properties
	AEnemyGrunt();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		bool isAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		FString AiState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		APawn* Player;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	

	//Components
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visuals")
		class UPaperFlipbookComponent* FlipBook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics")
		class UCapsuleComponent* Capsule;




	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};