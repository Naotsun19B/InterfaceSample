// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SampleComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INTERFACESAMPLE_API USampleComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USampleComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

//**
//* 追記した部分
//**
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SampleComponent")
	int SampleNumber = 0;

public:
	virtual int GetSampleNumber() const { return SampleNumber; }
	virtual void SetSampleNumber(int InNumber) { SampleNumber = InNumber; }
};
