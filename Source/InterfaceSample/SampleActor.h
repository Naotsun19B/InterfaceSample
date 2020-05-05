// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface_SampleComponent.h"
#include "SampleActor.generated.h"

class USapmleComponent;

UCLASS()
class INTERFACESAMPLE_API ASampleActor 
	: public AActor
	, public IInterface_SampleComponent
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SampleActor ", meta = (AllowPrivateAccess = "true"))
	USampleComponent* SampleComponent;

public:	
	// Sets default values for this actor's properties
	ASampleActor();

	// IInterface_SampleComponent
	USampleComponent* GetSampleComponent() const override { return SampleComponent; }
	// End of IInterface_SampleComponent

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
