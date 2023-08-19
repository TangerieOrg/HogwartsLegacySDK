#pragma once
#include <cstdint>
#include "FMathRBFInterpolateVectorFloat_Target.hpp"
#include "FRigUnit_MathRBFInterpolateVectorBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase {
    TArray<FMathRBFInterpolateVectorFloat_Target> Targets; // 0xb0
    float Output; // 0xc0
    char pad_c4[0xc];
}; // Size: 0xd0
#pragma pack(pop)
