#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRenderSettingsPPDepthOfField {
    uint8_t bOverride_SensorWidth : 1; // 0x0
    uint8_t bOverride_FocalDistance : 1; // 0x0
    uint8_t bOverride_DepthBlurAmount : 1; // 0x0
    uint8_t bOverride_DepthBlurRadius : 1; // 0x0
    uint8_t bOverride_Occlusion : 1; // 0x0
    uint8_t bOverride_Fstop : 1; // 0x0
    uint8_t bOverride_MinFstop : 1; // 0x0
    uint8_t bOverride_BladeCount : 1; // 0x0
    char pad_1[0x3];
    FName Name; // 0x4
    float SensorWidth; // 0xc
    float FocalDistance; // 0x10
    float DepthBlurAmount; // 0x14
    float DepthBlurRadius; // 0x18
    float Occlusion; // 0x1c
    float Fstop; // 0x20
    float MinFstop; // 0x24
    int32_t BladeCount; // 0x28
}; // Size: 0x2c
#pragma pack(pop)
