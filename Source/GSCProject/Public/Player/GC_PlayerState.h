// Copyright Bika Ridjalluddin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "GC_PlayerState.generated.h"

class UAttributeSet;
class UAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class GSCPROJECT_API AGC_PlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	
	AGC_PlayerState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const {return AttributeSet;}
	
private:

	UPROPERTY(VisibleAnywhere, Category="GSCP|Ability")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY( EditDefaultsOnly, Category = "GSCP|Attributes")
	TObjectPtr<UAttributeSet> AttributeSet;
};
