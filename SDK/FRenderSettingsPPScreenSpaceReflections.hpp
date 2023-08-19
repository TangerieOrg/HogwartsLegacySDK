#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRenderSettingsPPScreenSpaceReflections {
    uint8_t bOverride_Intensity : 1; // 0x0
    uint8_t bOverride_Quality : 1; // 0x0
    uint8_t bOverride_MaxRoughness : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
    FName Name; // 0x4
    float Intensity; // 0xc
    float Quality; // 0x10
    float MaxRoughness; // 0x14
}; // Size: 0x18
#pragma pack(pop)
