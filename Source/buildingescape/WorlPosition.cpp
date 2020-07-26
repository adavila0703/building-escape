// Fill out your copyright notice in the Description page of Project Settings.


#include "WorlPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorlPosition::UWorlPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorlPosition::BeginPlay()
{

	/*
	logging
	UE_LOG(LogTemp, Warning, TEXT("Warning!"));
	UE_LOG(LogTemp, Error, TEXT("Error!"));
	UE_LOG(LogTemp, Display, TEXT("Display!"));

	FString Log = TEXT("hello");
	FString* PtrLog = &Log;


	UE_LOG(LogTemp, Warning, TEXT("%s"), **PtrLog);

	*/

	Super::BeginPlay();

	FString ObjectName = GetOwner()->GetName();
	FString ObjectPos = GetOwner()->GetActorLocation().ToString();

	
	
}


// Called every frame
void UWorlPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

