#pragma once
#include <cstdint>
#include "FVector.hpp"
class UClass;
#pragma pack(push, 1)
struct FClimbRangeSet {
    UClass* ClimbAbility; // 0x0
    float LowerLimit; // 0x8
    float HigherLimit; // 0xc
    bool bUsePreAlignment; // 0x10
    char pad_11[0x3];
    FVector RelativeAlignmentLocation; // 0x14
}; // Size: 0x20
#pragma pack(pop)
