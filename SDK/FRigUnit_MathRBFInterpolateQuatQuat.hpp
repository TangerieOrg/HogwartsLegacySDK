#pragma once
#include <cstdint>
#include "FMathRBFInterpolateQuatQuat_Target.hpp"
#include "FQuat.hpp"
#include "FRigUnit_MathRBFInterpolateQuatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase {
    TArray<FMathRBFInterpolateQuatQuat_Target> Targets; // 0xd0
    FQuat Output; // 0xe0
}; // Size: 0xf0
#pragma pack(pop)
