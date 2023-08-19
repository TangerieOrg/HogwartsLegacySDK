#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
class UClass;
#pragma pack(push, 1)
struct FKeyToAbilityMapping : public FTableRowBase {
    bool bAdditive; // 0x8
    char pad_9[0x7];
    UClass* Ability; // 0x10
}; // Size: 0x18
#pragma pack(pop)
