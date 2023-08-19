#pragma once
#include <cstdint>
#include "ERBFKernelType.hpp"
#include "ERBFVectorDistanceType.hpp"
#include "FRigUnit_MathRBFInterpolateBase.hpp"
#include "FRigUnit_MathRBFInterpolateVectorWorkData.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase {
    FVector Input; // 0x8
    ERBFVectorDistanceType DistanceFunction; // 0x14
    ERBFKernelType SmoothingFunction; // 0x15
    char pad_16[0x2];
    float SmoothingRadius; // 0x18
    bool bNormalizeOutput; // 0x1c
    char pad_1d[0x3];
    FRigUnit_MathRBFInterpolateVectorWorkData WorkData; // 0x20
}; // Size: 0xb0
#pragma pack(pop)
