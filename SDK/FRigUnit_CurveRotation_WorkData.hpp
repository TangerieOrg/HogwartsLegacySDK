#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_CurveRotation_WorkData {
    TArray<int32_t> BoneIndices; // 0x0
    TArray<float> Angles; // 0x10
    TArray<FTransform> BoneLocalTransforms; // 0x20
    FName PrimaryCachedSpaceName; // 0x30
    int32_t PrimaryCachedSpaceIndex; // 0x38
    FName SecondaryCachedSpaceName; // 0x3c
    int32_t SecondaryCachedSpaceIndex; // 0x44
}; // Size: 0x48
#pragma pack(pop)
