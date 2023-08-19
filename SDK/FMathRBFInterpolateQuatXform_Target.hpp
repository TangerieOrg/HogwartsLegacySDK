#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FMathRBFInterpolateQuatXform_Target {
    FQuat Target; // 0x0
    FTransform Value; // 0x10
}; // Size: 0x40
#pragma pack(pop)
