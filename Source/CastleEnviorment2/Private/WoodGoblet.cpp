// Fill out your copyright notice in the Description page of Project Settings.


#include "WoodGoblet.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h "



// Sets default values - CONSTRUCTOR
AWoodGoblet::AWoodGoblet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	WG = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WoodenGoblet"));



}

// Called when the game starts or when spawned
void AWoodGoblet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWoodGoblet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

