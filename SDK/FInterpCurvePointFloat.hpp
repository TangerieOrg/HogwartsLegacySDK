#pragma once
#include <cstdint>
#include "EInterpCurveMode.hpp"
#pragma pack(push, 1)
struct FInterpCurvePointFloat {
    float InVal; // 0x0
    float OutVal; // 0x4
    float ArriveTangent; // 0x8
    float LeaveTangent; // 0xc
    EInterpCurveMode InterpMode; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
