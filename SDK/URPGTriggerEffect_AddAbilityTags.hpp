#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "URPGTriggerEffect_Conditional.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_AddAbilityTags : public URPGTriggerEffect_Conditional {
public:
    FGameplayTagContainer AbilityTags; // 0x40
    static URPGTriggerEffect_AddAbilityTags* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
