#pragma once
#include <cstdint>
#include "FBoneReferenceEx.hpp"
#pragma pack(push, 1)
struct FIKDriver_LedgeContactHipsControl {
    FName AlphaVariableName; // 0x0
    FName TargetTransformVariableName; // 0x8
    FBoneReferenceEx BoneReference; // 0x10
    float MaxRotationAngleAwayFromWall; // 0x20
    float MinDistanceFromWall; // 0x24
    char pad_28[0x88];
}; // Size: 0xb0
#pragma pack(pop)
