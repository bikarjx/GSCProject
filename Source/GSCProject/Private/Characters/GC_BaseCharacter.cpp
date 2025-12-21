// Copyright Bika Ridjalluddin


#include "GSCProject/Public/Characters/GC_BaseCharacter.h"
#include "AbilitySystemComponent.h"


AGC_BaseCharacter::AGC_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	
	// Tick and refresh bone transforms wether rendered or not for bone updates on a dedicated server.
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}

UAbilitySystemComponent* AGC_BaseCharacter::GetAbilitySystemComponent() const
{
	return nullptr;
}

void AGC_BaseCharacter::GiveStartupAbilities()
{
	if (!IsValid(GetAbilitySystemComponent())) return;
	
	for (const auto& Ability: StartupAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Ability);
		GetAbilitySystemComponent()->GiveAbility(AbilitySpec);
	}
}

