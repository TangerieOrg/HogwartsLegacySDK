#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FExpHeightFogSecondParametersOverride {
    uint8_t bOverride_FogDensity : 1; // 0x0
    uint8_t bOverride_FogHeightFalloff : 1; // 0x0
    uint8_t bOverride_FogHeightOffset : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
    float FogDensity; // 0x4
    float FogHeightFalloff; // 0x8
    float FogHeightOffset; // 0xc
}; // Size: 0x10
#pragma pack(pop)
