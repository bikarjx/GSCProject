// Copyright Bika Ridjalluddin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GC_BlueprintLibrary.generated.h"


UENUM(BlueprintType)
enum class EHitDirection:uint8
{
	Left,
	Right,
	Front,
	Back
};
/**
 * 
 */
UCLASS()
class GSCPROJECT_API UGC_BlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintPure, Category = "GSCP|Utils")
	static EHitDirection GetHitDirection(const FVector& TargetForward, const FVector& ToInstigator);
	
	UFUNCTION(BlueprintPure, Category = "GSCP|Utils")
	static FName GetHitDirectionName(const EHitDirection& HitDirection);
};
