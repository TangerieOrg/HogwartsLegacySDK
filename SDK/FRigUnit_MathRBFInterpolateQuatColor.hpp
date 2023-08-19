#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FMathRBFInterpolateQuatColor_Target.hpp"
#include "FRigUnit_MathRBFInterpolateQuatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase {
    TArray<FMathRBFInterpolateQuatColor_Target> Targets; // 0xd0
    FLinearColor Output; // 0xe0
}; // Size: 0xf0
#pragma pack(pop)
