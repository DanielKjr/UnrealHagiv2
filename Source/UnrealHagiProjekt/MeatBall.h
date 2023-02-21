// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MeatBall.generated.h"

UCLASS()
class UNREALHAGIPROJEKT_API AMeatBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UPROPERTY(BluePrintReadWrite, EditAnywhere, Category = "MeatBall| Radius")
		float Radius = 2.5f;
	AMeatBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
