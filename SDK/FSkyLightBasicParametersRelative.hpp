#pragma once
#include <cstdint>
#include "FAdjustedValueFloat.hpp"
#include "FColor.hpp"
#pragma pack(push, 1)
struct FSkyLightBasicParametersRelative {
    uint8_t bOverride_LightColor : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    FAdjustedValueFloat Intensity; // 0x4
    FColor LightColor; // 0x24
    FAdjustedValueFloat IndirectLightingIntensity; // 0x28
    FAdjustedValueFloat VolumetricScatteringIntensity; // 0x48
}; // Size: 0x68
#pragma pack(pop)
