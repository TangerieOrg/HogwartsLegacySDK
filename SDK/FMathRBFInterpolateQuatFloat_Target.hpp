#pragma once
#include <cstdint>
#include "FQuat.hpp"
#pragma pack(push, 1)
struct FMathRBFInterpolateQuatFloat_Target {
    FQuat Target; // 0x0
    float Value; // 0x10
    char pad_14[0xc];
}; // Size: 0x20
#pragma pack(pop)
