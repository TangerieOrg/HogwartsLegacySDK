#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FSkyAtmospherePlanetParametersOverride {
    uint8_t bOverride_BottomRadius : 1; // 0x0
    uint8_t bOverride_AtmosphereHeight : 1; // 0x0
    uint8_t bOverride_GroundAlbedo : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
    float BottomRadius; // 0x4
    float AtmosphereHeight; // 0x8
    FColor GroundAlbedo; // 0xc
}; // Size: 0x10
#pragma pack(pop)
