#pragma once
#include <cstdint>
#include "EInterpCurveMode.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FInterpCurvePointLinearColor {
    float InVal; // 0x0
    FLinearColor OutVal; // 0x4
    FLinearColor ArriveTangent; // 0x14
    FLinearColor LeaveTangent; // 0x24
    EInterpCurveMode InterpMode; // 0x34
    char pad_35[0x3];
}; // Size: 0x38
#pragma pack(pop)
