#pragma once
#include <cstdint>
#include "FMathRBFInterpolateVectorXform_Target.hpp"
#include "FRigUnit_MathRBFInterpolateVectorBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase {
    TArray<FMathRBFInterpolateVectorXform_Target> Targets; // 0xb0
    FTransform Output; // 0xc0
}; // Size: 0xf0
#pragma pack(pop)
