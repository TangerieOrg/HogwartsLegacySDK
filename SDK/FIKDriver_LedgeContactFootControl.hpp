#pragma once
#include <cstdint>
#include "FBoneReferenceEx.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FIKDriver_LedgeContactFootControl {
    FName AlphaVariableName; // 0x0
    FName TargetTransformVariableName; // 0x8
    FName ExtensionVariableName; // 0x10
    FName ToeTransformVariableName; // 0x18
    FBoneReferenceEx BoneReference; // 0x20
    FBoneReferenceEx ToeBoneReference; // 0x30
    float SweepRadius; // 0x40
    FVector WallLocationRelativeToBone; // 0x44
    float MaxLegExtension; // 0x50
    char pad_54[0xdc];
}; // Size: 0x130
#pragma pack(pop)
