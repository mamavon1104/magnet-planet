// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MagnetCharacter.h"

// Sets default values
ACPP_MagnetCharacter::ACPP_MagnetCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_MagnetCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_MagnetCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_MagnetCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

