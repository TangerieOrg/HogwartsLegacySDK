#pragma once
#include <cstdint>
#include "FBoneReferenceEx.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FIKDriver_LedgeContactHandControl {
    FName AlphaVariableName; // 0x0
    FName TargetTransformVariableName; // 0x8
    FBoneReferenceEx BoneReference; // 0x10
    float SweepRadius; // 0x20
    FVector LedgeLocationRelativeToBone; // 0x24
    char pad_30[0xa0];
}; // Size: 0xd0
#pragma pack(pop)
