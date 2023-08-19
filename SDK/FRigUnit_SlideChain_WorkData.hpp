#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SlideChain_WorkData {
    float ChainLength; // 0x0
    char pad_4[0x4];
    TArray<float> ItemSegments; // 0x8
    TArray<FCachedRigElement> CachedItems; // 0x18
    TArray<FTransform> Transforms; // 0x28
    TArray<FTransform> BlendedTransforms; // 0x38
}; // Size: 0x48
#pragma pack(pop)
