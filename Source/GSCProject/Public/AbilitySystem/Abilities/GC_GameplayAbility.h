// Copyright Bika Ridjalluddin

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GC_GameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class GSCPROJECT_API UGC_GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GSCP|Debug")
	bool bDrawDebugs = false;
	
};
