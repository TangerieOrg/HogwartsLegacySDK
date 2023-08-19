#pragma once
#include <cstdint>
#include "FMathRBFInterpolateQuatVector_Target.hpp"
#include "FRigUnit_MathRBFInterpolateQuatBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase {
    TArray<FMathRBFInterpolateQuatVector_Target> Targets; // 0xd0
    FVector Output; // 0xe0
    char pad_ec[0x4];
}; // Size: 0xf0
#pragma pack(pop)
