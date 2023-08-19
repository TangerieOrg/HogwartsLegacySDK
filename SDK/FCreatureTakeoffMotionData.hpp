#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FCreatureTakeoffMotionData {
    FGameplayTagContainer AnimationTags; // 0x0
    bool bRequiresNavTest; // 0x20
    char pad_21[0x3];
    FVector2D TestHeadingAngleRange; // 0x24
    float TestGroundDistance; // 0x2c
    float TestStraightLinePathDistance; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
