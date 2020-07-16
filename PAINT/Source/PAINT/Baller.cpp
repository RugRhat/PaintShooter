// Fill out your copyright notice in the Description page of Project Settings.


#include "Baller.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
// #include "Gun.h


// Sets default values
ABaller::ABaller()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
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
}


void ABaller::Shoot() 
{
	// Gun->PullTrigger();
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
		// Gun->Destroy();
	 } else{
		bEquiped = true;
		
		// Gun = GetWorld()->SpawnActor<AGun>(GunClass);	
		// Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("index_02_r"));
		// Gun->SetOwner(this);
	 }
}


void ABaller::Jump() 
{
	if(!bProne){
		ACharacter::Jump();
		bCrouched = false;
	}
	
	bProne = false;
}


void ABaller::Crouch() 
{
	// Using ACharacter::Crouch & UnCrouch to lower camera

	if(bCrouched){
		bCrouched = false;
		// ACharacter::UnCrouch(true);
	} else{
		bCrouched = true;	
		// ACharacter::Crouch(true);
	}
}


void ABaller::Prone() 
{
	// Using ACharacter::Crouch & UnCrouch to lower camera
	
	if(bProne){
		bProne = false;
		// ACharacter::UnCrouch(true);
	} else{
		bProne = true;	
		// ACharacter::Crouch(true);
	}
}


void ABaller::Aim() 
{
	bAiming = true;
}


void ABaller::StopAiming() 
{
	bAiming = false;
}


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






