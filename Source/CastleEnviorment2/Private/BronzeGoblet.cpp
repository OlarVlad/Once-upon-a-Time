// Fill out your copyright notice in the Description page of Project Settings.


#include "BronzeGoblet.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h "


// Sets default values
ABronzeGoblet::ABronzeGoblet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BG = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BronzeGoblet"));
}

// Called when the game starts or when spawned
void ABronzeGoblet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABronzeGoblet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

