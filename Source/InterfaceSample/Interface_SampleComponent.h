// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/Interface.h"
#include "Interface_SampleComponent.generated.h"

class USampleComponent;

UINTERFACE(meta = (CannotImplementInterfaceInBlueprint))
class UInterface_SampleComponent : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IInterface_SampleComponent
{
	GENERATED_IINTERFACE_BODY()

public:
	virtual USampleComponent* GetSampleComponent() const = 0;

	UFUNCTION(BlueprintCallable, Category = "Interface_SampleComponent")
	virtual int GetSampleNumber() const;

	UFUNCTION(BlueprintCallable, Category = "Interface_SampleComponent")
	virtual void SetSampleNumber(int InNumber);
};
