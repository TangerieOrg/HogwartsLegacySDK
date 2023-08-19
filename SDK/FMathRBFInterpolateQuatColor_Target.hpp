#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FQuat.hpp"
#pragma pack(push, 1)
struct FMathRBFInterpolateQuatColor_Target {
    FQuat Target; // 0x0
    FLinearColor Value; // 0x10
}; // Size: 0x20
#pragma pack(pop)
