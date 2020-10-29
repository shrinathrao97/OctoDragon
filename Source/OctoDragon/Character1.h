// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Character1.generated.h"

UCLASS()
class OCTODRAGON_API ACharacter1 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacter1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//Functions
	// Movement Functions
	void MoveRight(float value);

	void MoveUp(float value);




	//Vars
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visuals")
		class UPaperFlipBook* WalkAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visuals")
		class UPaperFlipbook* RunAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visuals")
		class UPaperFlipbook* IdleAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		bool IsCurrMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		bool IsFacingForward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		int ComboCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		bool InsideTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		bool ShouldResetCombo;

public:

	//Components
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		class UCameraComponent* MainFollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		class USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visuals")
		class UPaperFlipbookComponent* FlipBook;

	//Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		bool CanMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
		FString PlayerName;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};