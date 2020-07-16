// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"


class AProjectile;

UCLASS()
class PAINT_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PullTrigger();

private:

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AProjectile> ProjectileClass;

	UPROPERTY()
	AProjectile* Projectile;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
