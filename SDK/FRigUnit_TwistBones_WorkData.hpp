#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_TwistBones_WorkData {
    TArray<FCachedRigElement> CachedItems; // 0x0
    TArray<float> ItemRatios; // 0x10
    TArray<FTransform> ItemTransforms; // 0x20
}; // Size: 0x30
#pragma pack(pop)
