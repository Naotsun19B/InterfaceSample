// Fill out your copyright notice in the Description page of Project Settings.

#include "Interface_SampleComponent.h"
#include "SampleComponent.h"

UInterface_SampleComponent::UInterface_SampleComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
}

int IInterface_SampleComponent::GetSampleNumber() const
{
	USampleComponent* Component = GetSampleComponent();
	if (Component)
	{
		return Component->GetSampleNumber();
	}

	return 0;
}

void IInterface_SampleComponent::SetSampleNumber(int InNumber)
{
	USampleComponent* Component = GetSampleComponent();
	if (Component)
	{
		Component->SetSampleNumber(InNumber);
	}
}
