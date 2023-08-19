#pragma once
#include <cstdint>
#include "FMathRBFInterpolateVectorQuat_Target.hpp"
#include "FQuat.hpp"
#include "FRigUnit_MathRBFInterpolateVectorBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase {
    TArray<FMathRBFInterpolateVectorQuat_Target> Targets; // 0xb0
    FQuat Output; // 0xc0
}; // Size: 0xd0
#pragma pack(pop)
