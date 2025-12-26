// Copyright Bika Ridjalluddin. All Rights Reserved.


#include "UI/GC_WidgetComponent.h"

#include "AbilitySystem/GC_AbilitySystemComponent.h"
#include "AbilitySystem/GC_AttributeSet.h"
#include "Characters/GC_BaseCharacter.h"


void UGC_WidgetComponent::BeginPlay()
{
	Super::BeginPlay();
	
	InitAbilitySystemData();
	
	if (!IsASCInitialized())
	{
		GSCPCharacter->OnASCInitialized.AddDynamic(this, &ThisClass::OnASCInitialized);
	}
}

void UGC_WidgetComponent::InitAbilitySystemData()
{
	GSCPCharacter = Cast<AGC_BaseCharacter>(GetOwner());
	AttributeSet = Cast<UGC_AttributeSet>(GSCPCharacter->GetAttributeSet());
	AbilitySystemComponent = Cast<UGC_AbilitySystemComponent>(GSCPCharacter->GetAbilitySystemComponent());
}

bool UGC_WidgetComponent::IsASCInitialized() const
{
	return AbilitySystemComponent.IsValid() && AttributeSet.IsValid();
}

void UGC_WidgetComponent::OnASCInitialized(UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	AbilitySystemComponent = Cast<UGC_AbilitySystemComponent>(ASC);
	AttributeSet = Cast<UGC_AttributeSet>(AS);
}


