#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMathRBFInterpolateVectorQuat_Target {
    FVector Target; // 0x0
    char pad_c[0x4];
    FQuat Value; // 0x10
}; // Size: 0x20
#pragma pack(pop)
