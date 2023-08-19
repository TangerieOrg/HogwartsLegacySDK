#pragma once
#include <cstdint>
#include "EInterpCurveMode.hpp"
#include "FTwoVectors.hpp"
#pragma pack(push, 1)
struct FInterpCurvePointTwoVectors {
    float InVal; // 0x0
    FTwoVectors OutVal; // 0x4
    FTwoVectors ArriveTangent; // 0x1c
    FTwoVectors LeaveTangent; // 0x34
    EInterpCurveMode InterpMode; // 0x4c
    char pad_4d[0x3];
}; // Size: 0x50
#pragma pack(pop)
