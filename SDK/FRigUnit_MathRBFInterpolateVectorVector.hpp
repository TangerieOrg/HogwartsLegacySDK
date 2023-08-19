#pragma once
#include <cstdint>
#include "FMathRBFInterpolateVectorVector_Target.hpp"
#include "FRigUnit_MathRBFInterpolateVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase {
    TArray<FMathRBFInterpolateVectorVector_Target> Targets; // 0xb0
    FVector Output; // 0xc0
    char pad_cc[0x4];
}; // Size: 0xd0
#pragma pack(pop)
