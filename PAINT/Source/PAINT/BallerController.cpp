// Fill out your copyright notice in the Description page of Project Settings.


#include "BallerController.h"
#include "Baller.h"
#include "Blueprint/UserWidget.h"


void ABallerController::BeginPlay() 
{
    Super::BeginPlay();

    CrossHair = CreateWidget(this, HUDClass);
    UE_LOG(LogTemp, Warning, TEXT("CrossHair created"));
    if(CrossHair != nullptr){
        CrossHair->AddToViewport();
    }
}


void ABallerController::ManageCrossHair() 
{
    UE_LOG(LogTemp, Warning, TEXT("Manage CrossHair!"));
    //if(CrossHair != nullptr){
    //    UE_LOG(LogTemp, Warning, TEXT("Manage CrossHair!"));

    //     if(ThaBaller->IsEquiped()){
    //         UE_LOG(LogTemp, Warning, TEXT("Pre Add to Viewport"));
    //CrossHair->AddToViewport();
    //     } else{
    //         UE_LOG(LogTemp, Warning, TEXT("Pre Remove from Viewport"));
    // //         CrossHair->RemoveFromViewport();
    //     }
    //}
}

