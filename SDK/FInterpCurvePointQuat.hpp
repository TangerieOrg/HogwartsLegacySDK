#pragma once
#include <cstdint>
#include "EInterpCurveMode.hpp"
#include "FQuat.hpp"
#pragma pack(push, 1)
struct FInterpCurvePointQuat {
    float InVal; // 0x0
    char pad_4[0xc];
    FQuat OutVal; // 0x10
    FQuat ArriveTangent; // 0x20
    FQuat LeaveTangent; // 0x30
    EInterpCurveMode InterpMode; // 0x40
    char pad_41[0xf];
}; // Size: 0x50
#pragma pack(pop)
