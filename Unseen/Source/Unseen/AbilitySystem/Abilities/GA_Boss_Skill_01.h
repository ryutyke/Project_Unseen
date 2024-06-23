// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_Boss_Skill_01.generated.h"

/**
 * 
 */
UCLASS()
class UNSEEN_API UGA_Boss_Skill_01 : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UGA_Boss_Skill_01();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:

	UFUNCTION()
	void OnTraceResultCallback(const FGameplayAbilityTargetDataHandle& TargetDataHandle);
	
};
