#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FPostProcessingMIDScalarCurve {
    FName Parameter; // 0x0
    int32_t Blendable; // 0x8
    char pad_c[0x4];
    FRuntimeFloatCurve Curve; // 0x10
    bool bKillWhenDone; // 0x98
    char pad_99[0x7];
}; // Size: 0xa0
#pragma pack(pop)
