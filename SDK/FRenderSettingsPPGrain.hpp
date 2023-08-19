#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRenderSettingsPPGrain {
    uint8_t bOverride_Intensity : 1; // 0x0
    uint8_t bOverride_Jitter : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    char pad_1[0x3];
    float Jitter; // 0x4
    float Intensity; // 0x8
}; // Size: 0xc
#pragma pack(pop)
