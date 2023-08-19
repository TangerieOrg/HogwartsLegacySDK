#pragma once
#include <cstdint>
#include "EInterpCurveMode.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FInterpCurvePointVector {
    float InVal; // 0x0
    FVector OutVal; // 0x4
    FVector ArriveTangent; // 0x10
    FVector LeaveTangent; // 0x1c
    EInterpCurveMode InterpMode; // 0x28
    char pad_29[0x3];
}; // Size: 0x2c
#pragma pack(pop)
