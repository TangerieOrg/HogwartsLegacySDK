#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMathRBFInterpolateVectorXform_Target {
    FVector Target; // 0x0
    char pad_c[0x4];
    FTransform Value; // 0x10
}; // Size: 0x40
#pragma pack(pop)
