// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Baller.generated.h"

class USpringArmComponent;
class UCameraComponent;
// class AGun;

UCLASS()
class PAINT_API ABaller : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaller();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Shoot();

private:

	void Forward(float AxisValue);	
	void Right(float AxisValue);
	void LookUp(float AxisValue);
	void LookRight(float AxisValue);

	void Equip();
	void Jump();
	void Crouch();
	void Prone();
	void Aim();
	void StopAiming();

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	UFUNCTION(BlueprintCallable, Category = "Gunplay")
	bool IsEquiped() const;

	UFUNCTION(BlueprintCallable, Category = "Gunplay")
	bool IsAiming() const;

	UFUNCTION(BlueprintCallable, Category = "Movement")
	bool IsCrouched() const;

	UFUNCTION(BlueprintCallable, Category = "Movement")
	bool IsProne() const;

	UPROPERTY(EditAnywhere)
	float RotationRate = 70.f;

	// UPROPERTY(EditDefaultsOnly)
	// TSubclassOf<AGun> GunClass;

	// UPROPERTY()
	// AGun* Gun;

	bool bEquiped;
	bool bCrouched;
	bool bProne;
	bool bAiming;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
