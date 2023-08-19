#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FMathRBFInterpolateVectorColor_Target.hpp"
#include "FRigUnit_MathRBFInterpolateVectorBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase {
    TArray<FMathRBFInterpolateVectorColor_Target> Targets; // 0xb0
    FLinearColor Output; // 0xc0
}; // Size: 0xd0
#pragma pack(pop)
