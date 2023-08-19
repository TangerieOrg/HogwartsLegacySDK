#pragma once
#include <cstdint>
#include "EEnvironmentalGlobalsScalarConversion.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsScalarClamp {
    float ClampMin; // 0x0
    float ClampMax; // 0x4
    EEnvironmentalGlobalsScalarConversion ClampMinMaxConversion; // 0x8
    uint8_t bUseMin : 1; // 0x9
    uint8_t bUseMax : 1; // 0x9
    uint8_t pad_bitfield_9_2 : 6;
    char pad_a[0x2];
}; // Size: 0xc
#pragma pack(pop)
