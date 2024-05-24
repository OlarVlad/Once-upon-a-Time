// Fill out your copyright notice in the Description page of Project Settings.


#include "Goblet.h"
#include "Components/StaticMeshComponent.h "
#include "Components/SphereComponent.h"
#include "MyGameModeBase.h"

// Sets default values
AGoblet::AGoblet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AreaSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AreaSphere"));
	Goblet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Goblet"));

	AreaSphere->SetupAttachment(RootComponent);
	AreaSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void AGoblet::BeginPlay()
{
	Super::BeginPlay();

	AreaSphere->OnComponentBeginOverlap.AddDynamic(this, &AGoblet::OnSphereOverlap);
	
}

void AGoblet::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Red, FString::Printf(TEXT("%s"), *Message));
	}
	APawn* Pawn = Cast<APawn>(OtherActor);
	AMyGameModeBase* GameMode=GetWorld()->GetAuthGameMode<AMyGameModeBase>();
	if (GameMode != nullptr && Pawn != nullptr)
	{
		GameMode->nrOfGoblets++;
	}	
}

// Called every frame
void AGoblet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

