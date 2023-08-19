#pragma once
#include <cstdint>
#include "FClimbLadderSet.hpp"
class UClass;
#pragma pack(push, 1)
struct FLadderSettings {
    UClass* LadderAbility; // 0x0
    bool bForceReachingClimbLinkEndLocation; // 0x8
    bool bSnapRotationBeforeClimb; // 0x9
    char pad_a[0x2];
    float DefaultHorizontalOffset; // 0xc
    float TopDismountTolerance; // 0x10
    float BottomDismountTolerance; // 0x14
    FClimbLadderSet MountBottom; // 0x18
    FClimbLadderSet MountTop; // 0x30
    FClimbLadderSet DismountTop; // 0x48
    FClimbLadderSet DismountBottom; // 0x60
    FClimbLadderSet ClimbUp; // 0x78
    FClimbLadderSet ClimbDown; // 0x90
}; // Size: 0xa8
#pragma pack(pop)
