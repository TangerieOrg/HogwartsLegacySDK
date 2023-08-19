#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FRPGTimeTriggers.hpp"
#include "URPGAbilityBase.hpp"
class UGameplayPropertyMod;
class URPGCondition;
class URPGAbilityEventListener_Base;
class URPGTriggerEffect_Base;
#pragma pack(push, 1)
class URPGAbility : public URPGAbilityBase {
public:
    TArray<UGameplayPropertyMod*> Mods; // 0x70
    FGameplayTagContainer AbilityTags; // 0x80
    TArray<URPGAbilityEventListener_Base*> EventReactions; // 0xa0
    TArray<URPGTriggerEffect_Base*> TriggerEffects; // 0xb0
    TArray<URPGTriggerEffect_Base*> BeginAbilityTriggerEffects; // 0xc0
    TArray<URPGTriggerEffect_Base*> EndAbilityTriggerEffects; // 0xd0
    TArray<FRPGTimeTriggers> TimeTriggers; // 0xe0
    TArray<URPGCondition*> EndConditions; // 0xf0
    static URPGAbility* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
