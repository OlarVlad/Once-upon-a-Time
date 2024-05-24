// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Goblet.generated.h"

UCLASS()
class CASTLEENVIORMENT2_API AGoblet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGoblet();


	UPROPERTY(EditAnywhere) class USphereComponent* AreaSphere;
	

	UPROPERTY(EditAnywhere) class UStaticMeshComponent* Goblet;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
	FString Message = FString(TEXT("overlap"));

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
