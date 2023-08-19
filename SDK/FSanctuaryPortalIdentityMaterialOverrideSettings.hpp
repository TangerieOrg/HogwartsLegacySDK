#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSanctuaryPortalIdentityMaterialOverrideSettings {
    uint8_t bOverride_Desaturation : 1; // 0x0
    uint8_t bOverride_Brightness : 1; // 0x0
    uint8_t bOverride_Contrast : 1; // 0x0
    uint8_t bOverride_Tint : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
    char pad_1[0x3];
    float Desaturation; // 0x4
    float Brightness; // 0x8
    float Contrast; // 0xc
    FLinearColor Tint; // 0x10
}; // Size: 0x20
#pragma pack(pop)
