// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyGrunt.generated.h"

UCLASS()
class OCTODRAGON_API AEnemyGrunt : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyGrunt();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visuals")
		class UPaperFlipbook* IdleAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visuals")
		class UPaperFlipbook* RunAnimation;

public:	
	
	//Flipbook component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visuals")
		class UPaperFlipbookComponent* FlipBook;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
