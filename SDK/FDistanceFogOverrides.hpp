#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDistanceFogOverrides {
    uint8_t bOverride_OnOff : 1; // 0x0
    uint8_t bOverride_FogGradientHorizonOffset : 1; // 0x0
    uint8_t bOverride_MaxFogOpacityPercent : 1; // 0x0
    uint8_t bOverride_StartDistance : 1; // 0x0
    uint8_t bOverride_FullDistance : 1; // 0x0
    uint8_t bOverride_Thickness : 1; // 0x0
    uint8_t bOverride_BlendSceneColorPercent : 1; // 0x0
    uint8_t pad_bitfield_0_7 : 1;
    char pad_1[0x3];
    float OnOff; // 0x4
    float FogGradientHorizonOffset; // 0x8
    float MaxFogOpacityPercent; // 0xc
    float StartDistance; // 0x10
    float FullDistance; // 0x14
    float Thickness; // 0x18
    float BlendSceneColorPercent; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
