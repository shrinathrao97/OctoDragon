// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyGrunt.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipBook.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AEnemyGrunt::AEnemyGrunt()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	//Sprite Renderer
	FlipBook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("2D Renderer"));
	FlipBook->SetupAttachment(RootComponent);

	// Character Movement Stuff
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 0.0f, 0.0f);
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

}

// Called when the game starts or when spawned
void AEnemyGrunt::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyGrunt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyGrunt::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

