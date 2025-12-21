// Copyright Bika Ridjalluddin

#pragma once

#include "CoreMinimal.h"
#include "GC_BaseCharacter.h"
#include "GC_PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class GSCPROJECT_API AGC_PlayerCharacter : public AGC_BaseCharacter
{
	GENERATED_BODY()

public:
	AGC_PlayerCharacter();
	
private:
	
	UPROPERTY(VisibleAnywhere, Category="Camera")
	TObjectPtr<USpringArmComponent> CameraBoom;
	
	UPROPERTY(VisibleAnywhere, Category="Camera")
	TObjectPtr<UCameraComponent> FollowCamera;
};
