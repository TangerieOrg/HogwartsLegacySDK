#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereSkyOnlyColorParameterOverride {
    uint8_t bOverride_Color : 1; // 0x0
    uint8_t bOverride_Intensity : 1; // 0x0
    uint8_t bOverride_Saturation : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
    FLinearColor Color; // 0x4
    float Intensity; // 0x14
    float Saturation; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
