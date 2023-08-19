#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "URPGCondition.hpp"
#pragma pack(push, 1)
class URPGCondition_HasAbilityTags : public URPGCondition {
public:
    FGameplayTagContainer AbilityTags; // 0x30
    static URPGCondition_HasAbilityTags* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
