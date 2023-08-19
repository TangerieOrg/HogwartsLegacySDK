#pragma once
#include <cstdint>
#include "FBoneReferenceEx.hpp"
#pragma pack(push, 1)
struct FIKDriver_GroundAdjustment_ReachControl {
    FBoneReferenceEx BoneReference; // 0x0
    TArray<FBoneReferenceEx> EndEffectorBoneReferences; // 0x10
    float InterpSpeed; // 0x20
    float InterpDampingFactor; // 0x24
    float FilteringSpeed; // 0x28
    float FilteringDampingFactor; // 0x2c
    float LowestOrAverage; // 0x30
    float MaxControlAdjustment; // 0x34
    FName AlphaVariableName; // 0x38
    FName TargetTransformVariableName; // 0x40
    char pad_48[0xc8];
}; // Size: 0x110
#pragma pack(pop)
