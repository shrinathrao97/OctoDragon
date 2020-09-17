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

	// Move Right
	void MoveRight(float value);

	// Move Z-
	void MoveUp(float value);

public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		class UCameraComponent* MainFollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		class USpringArmComponent* CameraBoom;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};