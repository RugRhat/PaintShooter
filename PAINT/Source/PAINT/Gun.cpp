// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Projectile.h"
// #include "Kismet/GameplayStatics.h"


// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	ProjectileSpawnPoint->SetupAttachment(Mesh);
}


// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AGun::PullTrigger() 
{
	if(ProjectileClass){
		FVector SpawnLocation = ProjectileSpawnPoint->GetComponentLocation();
		FRotator SpawnRotation = ProjectileSpawnPoint->GetComponentRotation();

		Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
		Projectile->SetOwner(this);
	}
}

