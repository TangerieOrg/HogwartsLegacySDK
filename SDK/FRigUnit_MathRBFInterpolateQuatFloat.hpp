#pragma once
#include <cstdint>
#include "FMathRBFInterpolateQuatFloat_Target.hpp"
#include "FRigUnit_MathRBFInterpolateQuatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase {
    TArray<FMathRBFInterpolateQuatFloat_Target> Targets; // 0xd0
    float Output; // 0xe0
    char pad_e4[0xc];
}; // Size: 0xf0
#pragma pack(pop)
