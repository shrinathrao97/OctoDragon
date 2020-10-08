// Fill out your copyright notice in the Description page of Project Settings.


#include "Character1.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipBook.h"


// Sets default values
ACharacter1::ACharacter1()
{

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates 
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	//Setup Gameplay Variables
	IsCurrMoving = false;
	IsFacingForward = true;
	ComboResetTimer = 0.0f;

	//Sprite Renderer
	FlipBook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("2D Renderer"));
	FlipBook->SetupAttachment(RootComponent);

	//Camera Boom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f, 0.f, 75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f, 180.f, 0.f));

	// Create the Camera and attach it to the boom
	MainFollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Main Camera"));
	MainFollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	MainFollowCamera->bUsePawnControlRotation = false;

	// Character Movement Stuff
	canMove = true;
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
void ACharacter1::BeginPlay()
{
	Super::BeginPlay();

}



// Called every frame
void ACharacter1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetCharacterMovement()->Velocity.Size() == 0.0f) {
	
		IsCurrMoving = false;
	
	}
}



// Called to bind functionality to input
void ACharacter1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

	// Key Bindings
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacter1::MoveRight);
	PlayerInputComponent->BindAxis("MoveUp", this, &ACharacter1::MoveUp);

}

void ACharacter1::MoveRight(float value)
{
	
	
	if (value < 0 ) {
		IsCurrMoving = true;
		SetActorRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
		IsFacingForward = false;

	}

	if (value > 0) {
		IsCurrMoving = true;
		SetActorRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
		IsFacingForward = true;

	}

	if (canMove == true) {
		AddMovementInput(FVector(0.f, -1.f, 0.f), value);
	}
	
	
}

void ACharacter1::MoveUp(float value)
{
	if (value != 0 && canMove == true){
		IsCurrMoving = true;
		AddMovementInput(FVector(-1.f, 0.f, 0.f), value);
	}
	
}

