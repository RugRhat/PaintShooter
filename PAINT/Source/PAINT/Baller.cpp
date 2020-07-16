// Fill out your copyright notice in the Description page of Project Settings.


#include "Baller.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Gun.h"
// #include "Kismet/KismetSystemLibrary.h"


// Sets default values
ABaller::ABaller()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	//SpringArm->SetRelativeRotation(FRotator(0.f, 20.f, 0.f));
	SpringArm->TargetArmLength = 250.f;
    SpringArm->SetupAttachment(RootComponent);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ABaller::BeginPlay()
{
	Super::BeginPlay();
	
	bEquiped = false;
	bAiming = false;
	bCrouched = false;
	bProne = false;
}

// Called every frame
void ABaller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaller::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &ABaller::Forward);
	PlayerInputComponent->BindAxis(TEXT("Right"), this, &ABaller::Right);
	PlayerInputComponent->BindAxis(TEXT("Look Up"), this, &ABaller::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Look Right"), this, &ABaller::LookRight);
	
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ABaller::Jump);
	PlayerInputComponent->BindAction(TEXT("Equip"), EInputEvent::IE_Pressed, this, &ABaller::Equip);
	PlayerInputComponent->BindAction(TEXT("Aim"), EInputEvent::IE_Pressed, this, &ABaller::Aim);
	PlayerInputComponent->BindAction(TEXT("Aim"), EInputEvent::IE_Released, this, &ABaller::StopAiming);
	PlayerInputComponent->BindAction(TEXT("Crouch"), EInputEvent::IE_Pressed, this, &ABaller::Crouch);
	PlayerInputComponent->BindAction(TEXT("Prone"), EInputEvent::IE_Pressed, this, &ABaller::Prone);
	PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &ABaller::Shoot);
	// PlayerInputComponent->BindAction(TEXT("Quit"), EInputEvent::IE_Pressed, this, &ABaller::Quit);
}


void ABaller::Shoot() 
{
	if(bEquiped){
		Gun->PullTrigger();
	}
}


void ABaller::Forward(float AxisValue) 
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}


void ABaller::Right(float AxisValue) 
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}


void ABaller::LookUp(float AxisValue) 
{
	AddControllerPitchInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}


void ABaller::LookRight(float AxisValue) 
{
	AddControllerYawInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}


void ABaller::Equip() 
{
	if(bEquiped){
		bEquiped = false;
		Gun->Destroy();
	 } else{
		bEquiped = true;
		
		Gun = GetWorld()->SpawnActor<AGun>(GunClass);	
		Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("index_02_r"));
		Gun->SetOwner(this);
	 }
}


void ABaller::Jump() 
{
	if(!bProne){
		ACharacter::Jump();
		SpringArm->TargetArmLength = 250.f;
		SpringArm->SocketOffset = FVector(0.f, 0.f, 0.f);
		if(bCrouched){
			Crouch();
		}
	} else{
		bProne = false;
		SpringArm->TargetArmLength = 250.f;
		SpringArm->SocketOffset = FVector(0.f, 0.f, 0.f);
	}
}


void ABaller::Crouch() 
{
	if(bEquiped){
		if(bCrouched){
			bCrouched = false;
			SpringArm->TargetArmLength = 250.f;
			SpringArm->SocketOffset = FVector(0.f, 0.f, 0.f);
		} else{
			bCrouched = true;	
			SpringArm->TargetArmLength = 200.f;
			SpringArm->SocketOffset = FVector(0.f, 0.f, -35.f);
		}
	}
}


void ABaller::Prone() 
{
	if(bEquiped){
		if(bProne){
			bProne = false;
			SpringArm->TargetArmLength = 250.f;
			SpringArm->SocketOffset = FVector(0.f, 0.f, 0.f);
		} else{
			bProne = true;
			SpringArm->TargetArmLength = 75.f;
			SpringArm->SocketOffset = FVector(0.f, 0.f, -75.f);
		}
	}
}


void ABaller::Aim() 
{
	if(bEquiped){
		bAiming = true;
		SpringArm->TargetArmLength = 50.f;
		SpringArm->SocketOffset = FVector(0.f, 25.f, 0.f);
		SpringArm->SetRelativeRotation(FRotator(0.f, 20.f, 0.f));
	}
}


void ABaller::StopAiming() 
{
	bAiming = false;
	SpringArm->TargetArmLength = 250.f;
	SpringArm->SocketOffset = FVector(0.f, 0.f, 0.f);
}


// void ABaller::Quit() 
// {
// 	UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
// }


bool ABaller::IsEquiped() const
{
	return bEquiped;
}


bool ABaller::IsAiming() const
{
	return bAiming;
}


bool ABaller::IsCrouched() const
{
	return bCrouched;
}


bool ABaller::IsProne() const
{
	return bProne;
}






