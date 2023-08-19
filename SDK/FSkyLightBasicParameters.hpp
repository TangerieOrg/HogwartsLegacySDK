#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FSkyLightBasicParameters {
    float Intensity; // 0x0
    FColor LightColor; // 0x4
    float IndirectLightingIntensity; // 0x8
    float VolumetricScatteringIntensity; // 0xc
}; // Size: 0x10
#pragma pack(pop)
