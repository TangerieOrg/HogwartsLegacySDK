#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FDirectionalLightBasicParameters {
    float Intensity; // 0x0
    FColor LightColor; // 0x4
    float Temperature; // 0x8
    bool bUseTemperature; // 0xc
    char pad_d[0x3];
    float SpecularScale; // 0x10
    float IndirectLightingIntensity; // 0x14
    float VolumetricScatteringIntensity; // 0x18
    float AtmosphereSunLightPriority; // 0x1c
    bool bPseudoLight; // 0x20
    bool bExponentialIntensityBlend; // 0x21
    char pad_22[0x2];
}; // Size: 0x24
#pragma pack(pop)
