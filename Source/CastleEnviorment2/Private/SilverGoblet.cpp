// Fill out your copyright notice in the Description page of Project Settings.


#include "SilverGoblet.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h "

// Sets default values
ASilverGoblet::ASilverGoblet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SG = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SilverGoblet"));

}

// Called when the game starts or when spawned
void ASilverGoblet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASilverGoblet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

