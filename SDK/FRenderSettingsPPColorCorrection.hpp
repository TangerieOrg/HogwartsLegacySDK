#pragma once
#include <cstdint>
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FRenderSettingsPPColorCorrection {
    uint8_t bOverride_Saturation : 1; // 0x0
    uint8_t bOverride_Contrast : 1; // 0x0
    uint8_t bOverride_Gamma : 1; // 0x0
    uint8_t bOverride_Gain : 1; // 0x0
    uint8_t bOverride_Offset : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
    char pad_1[0xf];
    FVector4 Saturation; // 0x10
    FVector4 Contrast; // 0x20
    FVector4 Gamma; // 0x30
    FVector4 Gain; // 0x40
    FVector4 Offset; // 0x50
}; // Size: 0x60
#pragma pack(pop)
