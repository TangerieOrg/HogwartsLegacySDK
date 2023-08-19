#pragma once
#include <cstdint>
#include "FClimbRangeSet.hpp"
class UClass;
#pragma pack(push, 1)
struct FClimbSettings {
    bool bForceReachingClimbLinkEndLocation; // 0x0
    bool bSnapRotationBeforeClimb; // 0x1
    char pad_2[0x6];
    UClass* ClimbAbility; // 0x8
    UClass* JumpToClimbAbility; // 0x10
    UClass* SwimClimbAbility; // 0x18
    TArray<FClimbRangeSet> ClimbVariations; // 0x20
}; // Size: 0x30
#pragma pack(pop)
