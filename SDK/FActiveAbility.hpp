#pragma once
#include <cstdint>
class URPGAbilityBase;
#pragma pack(push, 1)
struct FActiveAbility {
    URPGAbilityBase* Ability; // 0x0
    URPGAbilityBase* Template; // 0x8
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
