#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FLightTemplateSettings {
    float Intensity; // 0x0
    FLinearColor LightColor; // 0x4
    float LightTemperature; // 0x14
    float AttenuationRadius; // 0x18
    float IndirectLightingIntensity; // 0x1c
    float VolumetricScatteringIntensity; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
