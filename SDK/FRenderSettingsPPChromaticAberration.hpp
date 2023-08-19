#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRenderSettingsPPChromaticAberration {
    uint8_t bOverride_SceneFringeIntensity : 1; // 0x0
    uint8_t bOverride_StartOffset : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    char pad_1[0x3];
    float SceneFringeIntensity; // 0x4
    float StartOffset; // 0x8
}; // Size: 0xc
#pragma pack(pop)
