// Fill out your copyright notice in the Description page of Project Settings.


#include "Chest.h"
#include "Components/StaticMeshComponent.h "
#include "Components/SphereComponent.h"

// Sets default values
AChest::AChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Chest = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Chest"));
	AreaSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AreaSphere"));

	AreaSphere->SetupAttachment(RootComponent);
	AreaSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void AChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

