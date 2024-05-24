// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WoodGoblet.generated.h"

UCLASS()
class CASTLEENVIORMENT2_API AWoodGoblet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWoodGoblet();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere);
	UStaticMeshComponent* WG;

};
