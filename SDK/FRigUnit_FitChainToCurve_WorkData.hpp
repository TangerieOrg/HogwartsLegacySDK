#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_FitChainToCurve_WorkData {
    float ChainLength; // 0x0
    char pad_4[0x4];
    TArray<FVector> ItemPositions; // 0x8
    TArray<float> ItemSegments; // 0x18
    TArray<FVector> CurvePositions; // 0x28
    TArray<float> CurveSegments; // 0x38
    TArray<FCachedRigElement> CachedItems; // 0x48
    TArray<int32_t> ItemRotationA; // 0x58
    TArray<int32_t> ItemRotationB; // 0x68
    TArray<float> ItemRotationT; // 0x78
    TArray<FTransform> ItemLocalTransforms; // 0x88
}; // Size: 0x98
#pragma pack(pop)
