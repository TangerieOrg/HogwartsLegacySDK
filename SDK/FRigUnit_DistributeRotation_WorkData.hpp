#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DistributeRotation_WorkData {
    TArray<FCachedRigElement> CachedItems; // 0x0
    TArray<int32_t> ItemRotationA; // 0x10
    TArray<int32_t> ItemRotationB; // 0x20
    TArray<float> ItemRotationT; // 0x30
    TArray<FTransform> ItemLocalTransforms; // 0x40
}; // Size: 0x50
#pragma pack(pop)
