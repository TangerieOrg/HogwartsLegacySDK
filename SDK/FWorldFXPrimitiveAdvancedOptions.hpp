#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWorldFXPrimitiveAdvancedOptions {
    int32_t TranslucencySortPriority; // 0x0
    float TranslucencySortDistanceOffset; // 0x4
    uint8_t bReceivesDecals : 1; // 0x8
    uint8_t bReceivesWeatherDecals : 1; // 0x8
    uint8_t pad_bitfield_8_2 : 6;
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
