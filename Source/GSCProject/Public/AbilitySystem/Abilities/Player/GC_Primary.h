// Copyright Bika Ridjalluddin

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/GC_GameplayAbility.h"
#include "GC_Primary.generated.h"

/**
 * 
 */
UCLASS()
class GSCPROJECT_API UGC_Primary : public UGC_GameplayAbility
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION( BlueprintCallable, Category="GSCP|Abilities")
	void HitBoxOverlapTest();
	
private:
	
	UPROPERTY( EditDefaultsOnly, Category = "GSCP|Abilities")
	float HitBoxRadius = 100.0f;
	
	UPROPERTY(EditDefaultsOnly, Category = "GSCP|Abilities")
	float HitBoxForwardOffset = 200.f;
	
	UPROPERTY(EditDefaultsOnly, Category = "GSCP|Abilities")
	float HitBoxElevationOffset = 20.f;
};
