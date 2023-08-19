#pragma once
#include <cstdint>
#include "ERBFKernelType.hpp"
#include "ERBFQuatDistanceType.hpp"
#include "FQuat.hpp"
#include "FRigUnit_MathRBFInterpolateBase.hpp"
#include "FRigUnit_MathRBFInterpolateQuatWorkData.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase {
    char pad_8[0x8];
    FQuat Input; // 0x10
    ERBFQuatDistanceType DistanceFunction; // 0x20
    ERBFKernelType SmoothingFunction; // 0x21
    char pad_22[0x2];
    float SmoothingAngle; // 0x24
    bool bNormalizeOutput; // 0x28
    char pad_29[0x3];
    FVector TwistAxis; // 0x2c
    char pad_38[0x8];
    FRigUnit_MathRBFInterpolateQuatWorkData WorkData; // 0x40
}; // Size: 0xd0
#pragma pack(pop)
