// Copyright Bika Ridjalluddin. All Rights Reserved.


#include "AbilitySystem/GC_AbilitySystemComponent.h"

#include "GameplayTags/GCTags.h"


void UGC_AbilitySystemComponent::OnGiveAbility(FGameplayAbilitySpec& AbilitySpec)
{
	Super::OnGiveAbility(AbilitySpec);
	
	HandleAutoActivateAbilities(AbilitySpec);
}

void UGC_AbilitySystemComponent::OnRep_ActivateAbilities()
{
	Super::OnRep_ActivateAbilities();
	
	FScopedAbilityListLock ActivateScopeLock(*this);
	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		HandleAutoActivateAbilities(AbilitySpec);
	}
}

void UGC_AbilitySystemComponent::HandleAutoActivateAbilities(const FGameplayAbilitySpec& AbilitySpec)
{
	if (!IsValid(AbilitySpec.Ability)) return;
	
	for (const FGameplayTag& Tag : AbilitySpec.Ability->GetAssetTags())
	{
		if (Tag.MatchesTagExact(GCTags::GCAbilities::ActivateOnGiven))
		{
			TryActivateAbility(AbilitySpec.Handle);
			return;
		}
	}
}
