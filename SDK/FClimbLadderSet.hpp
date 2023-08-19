#pragma once
#include <cstdint>
#include "FVector.hpp"
class UClass;
#pragma pack(push, 1)
struct FClimbLadderSet {
    UClass* OverrideClimbAbility; // 0x0
    bool bUsePreAlignment; // 0x8
    char pad_9[0x3];
    FVector RelativeAlignmentLocation; // 0xc
}; // Size: 0x18
#pragma pack(pop)
