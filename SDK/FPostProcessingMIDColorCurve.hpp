#pragma once
#include <cstdint>
#include "FRuntimeCurveLinearColor.hpp"
#pragma pack(push, 1)
struct FPostProcessingMIDColorCurve {
    FName Parameter; // 0x0
    int32_t Blendable; // 0x8
    char pad_c[0x4];
    FRuntimeCurveLinearColor Curve; // 0x10
    bool bKillWhenDone; // 0x218
    char pad_219[0x7];
}; // Size: 0x220
#pragma pack(pop)
