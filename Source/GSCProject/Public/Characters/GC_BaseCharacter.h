// Copyright Bika Ridjalluddin

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "GC_BaseCharacter.generated.h"

class UGameplayEffect;
class UGameplayAbility;

UCLASS(Abstract)
class GSCPROJECT_API AGC_BaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGC_BaseCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	
protected:
	
	void GiveStartupAbilities();
	void InitializeAttributes() const;
	
private:
	
	UPROPERTY(EditDefaultsOnly, Category = "GSCP|Abilities")
	TArray<TSubclassOf<UGameplayAbility>> StartupAbilities;
	
	UPROPERTY(EditDefaultsOnly, Category = "GSCP|Effects")
	TSubclassOf<UGameplayEffect> InitializeAttributeEffect;
};
