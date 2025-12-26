// Copyright Bika Ridjalluddin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/GC_GameplayAbility.h"
#include "GC_HitReact.generated.h"

/**
 * 
 */
UCLASS()
class GSCPROJECT_API UGC_HitReact : public UGC_GameplayAbility
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION( BlueprintCallable, Category="GSCP|Abilities")
	void CacheHitDirectionVectors(AActor* Instigator);
	
	UPROPERTY(BlueprintReadOnly, Category = "GSCP|Ability")
	FVector AvatarForward;
	
	UPROPERTY(BlueprintReadOnly, Category = "GSCP|Ability")
	FVector ToInstigator;
};
