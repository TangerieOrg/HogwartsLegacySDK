#pragma once
#include <cstdint>
#include "EDayNightCloudSceneLightingSource.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FDayNightCloudSceneLighting {
    EDayNightCloudSceneLightingSource LightDirection; // 0x0
    EDayNightCloudSceneLightingSource LightColor; // 0x1
    EDayNightCloudSceneLightingSource LightIntensity; // 0x2
    char pad_3[0x1];
    float Saturation; // 0x4
    FRotator ManualLightDirection; // 0x8
    FLinearColor ManualLightColor; // 0x14
    float ManualLightIntensity; // 0x24
}; // Size: 0x28
#pragma pack(pop)
