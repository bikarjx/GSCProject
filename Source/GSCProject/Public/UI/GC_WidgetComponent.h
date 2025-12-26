// Copyright Bika Ridjalluddin. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GC_WidgetComponent.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;
class UGC_AttributeSet;
class UGC_AbilitySystemComponent;
class AGC_BaseCharacter;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GSCPROJECT_API UGC_WidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	
	
protected:
	virtual void BeginPlay() override;
	
private:
	
	TWeakObjectPtr<AGC_BaseCharacter> GSCPCharacter;
	TWeakObjectPtr<UGC_AbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<UGC_AttributeSet> AttributeSet;
	
	void InitAbilitySystemData();
	bool IsASCInitialized() const;

	UFUNCTION()
	void OnASCInitialized(UAbilitySystemComponent* ASC,UAttributeSet* AS);
};
