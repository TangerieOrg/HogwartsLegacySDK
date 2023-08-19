#pragma once
#include <cstdint>
#include "FMathRBFInterpolateQuatXform_Target.hpp"
#include "FRigUnit_MathRBFInterpolateQuatBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase {
    TArray<FMathRBFInterpolateQuatXform_Target> Targets; // 0xd0
    FTransform Output; // 0xe0
}; // Size: 0x110
#pragma pack(pop)
