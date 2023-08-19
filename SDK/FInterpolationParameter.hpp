#pragma once
#include <cstdint>
#include "EFilterInterpolationType.hpp"
#pragma pack(push, 1)
struct FInterpolationParameter {
    float InterpolationTime; // 0x0
    EFilterInterpolationType InterpolationType; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
