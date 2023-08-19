#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FInstancedTrailMemberScale {
    float Scale; // 0x0
    float RandomizePercent; // 0x4
    FRuntimeFloatCurve Curve; // 0x8
    bool bScaleCurve; // 0x90
    char pad_91[0x7];
}; // Size: 0x98
#pragma pack(pop)
