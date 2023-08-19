#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVolumetricCloudsAdvancedParametersOverride {
    uint8_t bOverride_FogDensityMultiplier : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    float FogDensityMultiplier; // 0x4
    uint8_t bOverride_HeightFogDensityMultiplier : 1; // 0x8
    uint8_t pad_bitfield_8_1 : 7;
    char pad_9[0x3];
    float HeightFogDensityMultiplier; // 0xc
}; // Size: 0x10
#pragma pack(pop)
