#pragma once
#include <cstdint>
#include "ESpellUpgrades.hpp"
#include "FGameplayTag.hpp"
#pragma pack(push, 1)
struct FAbilityFunction {
    FGameplayTag GameplayTag; // 0x0
    ESpellUpgrades Upgrade; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
