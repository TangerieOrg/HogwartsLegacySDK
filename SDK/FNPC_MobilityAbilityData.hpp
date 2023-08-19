#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class UClass;
#pragma pack(push, 1)
struct FNPC_MobilityAbilityData {
    bool bSupported; // 0x0
    char pad_1[0x7];
    UClass* AbilityPtr; // 0x8
    FGameplayTagContainer AATags; // 0x10
}; // Size: 0x30
#pragma pack(pop)
