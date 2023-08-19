#pragma once
#include <cstdint>
#include "FQuat.hpp"
#pragma pack(push, 1)
struct FMathRBFInterpolateQuatQuat_Target {
    FQuat Target; // 0x0
    FQuat Value; // 0x10
}; // Size: 0x20
#pragma pack(pop)
