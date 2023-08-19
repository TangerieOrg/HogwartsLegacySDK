#pragma once
#include <cstdint>
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FColorGradePerRangeSettings {
    FVector4 Saturation; // 0x0
    FVector4 Contrast; // 0x10
    FVector4 Gamma; // 0x20
    FVector4 Gain; // 0x30
    FVector4 Offset; // 0x40
}; // Size: 0x50
#pragma pack(pop)
