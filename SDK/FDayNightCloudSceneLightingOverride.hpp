#pragma once
#include <cstdint>
#include "EDayNightCloudSceneLightingSource.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FDayNightCloudSceneLightingOverride {
    EDayNightCloudSceneLightingSource LightDirection; // 0x0
    EDayNightCloudSceneLightingSource LightColor; // 0x1
    EDayNightCloudSceneLightingSource LightIntensity; // 0x2
    char pad_3[0x1];
    float Saturation; // 0x4
    FRotator ManualLightDirection; // 0x8
    FLinearColor ManualLightColor; // 0x14
    float ManualLightIntensity; // 0x24
    uint8_t bOverride_LightDirection : 1; // 0x28
    uint8_t bOverride_LightColor : 1; // 0x28
    uint8_t bOverride_LightIntensity : 1; // 0x28
    uint8_t bOverride_Saturation : 1; // 0x28
    uint8_t pad_bitfield_28_4 : 4;
    char pad_29[0x3];
}; // Size: 0x2c
#pragma pack(pop)
