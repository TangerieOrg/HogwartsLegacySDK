#pragma once
#include <cstdint>
#include "EInterpCurveMode.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FInterpCurvePointVector2D {
    float InVal; // 0x0
    FVector2D OutVal; // 0x4
    FVector2D ArriveTangent; // 0xc
    FVector2D LeaveTangent; // 0x14
    EInterpCurveMode InterpMode; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
