#pragma once
#include <cstdint>
#include "FSkyAtmosphereSkyOnlyColorParameterOverride.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereSkyOnlyParametersOverride {
    uint8_t bOverride_OverallBrightness : 1; // 0x0
    uint8_t bOverride_OverallSaturation : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    char pad_1[0x3];
    float OverallBrightness; // 0x4
    float OverallSaturation; // 0x8
    FSkyAtmosphereSkyOnlyColorParameterOverride SkyMod; // 0xc
    FSkyAtmosphereSkyOnlyColorParameterOverride SunDiskMod; // 0x28
    FSkyAtmosphereSkyOnlyColorParameterOverride MoonDiskMod; // 0x44
}; // Size: 0x60
#pragma pack(pop)
