#pragma once
#include <cstdint>
#include "FLookLimits.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_IncrementalRotation_WorkData {
    TArray<int32_t> BoneIndices; // 0x0
    TArray<FLookLimits> ActualLookRanges; // 0x10
    TArray<float> AngleLimits; // 0x20
    TArray<float> Angles; // 0x30
    TArray<FTransform> BoneLocalTransforms; // 0x40
    FName PrimaryCachedSpaceName; // 0x50
    int32_t PrimaryCachedSpaceIndex; // 0x58
    FName SecondaryCachedSpaceName; // 0x5c
    int32_t SecondaryCachedSpaceIndex; // 0x64
}; // Size: 0x68
#pragma pack(pop)
