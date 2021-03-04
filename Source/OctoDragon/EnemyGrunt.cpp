// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyGrunt.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipBook.h"
#include "Character1.h"
#include "Components/ArrowComponent.h"


// Sets default values
AEnemyGrunt::AEnemyGrunt()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setup Capsule Root
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	Capsule->InitCapsuleSize(42.f, 96.0f);
	RootComponent = Capsule;

	//Setup Flipbook
	FlipBook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("2D Renderer"));
	FlipBook->SetupAttachment(Capsule);

	//Setup Arrow Component
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(Capsule);

	//SetupStartinRotations

	SetActorRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));


	


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

