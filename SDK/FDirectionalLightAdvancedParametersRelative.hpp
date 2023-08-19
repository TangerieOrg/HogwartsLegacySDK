#pragma once
#include <cstdint>
#include "FAdjustedValueBoolean.hpp"
#include "FAdjustedValueFloat.hpp"
#include "FLightingChannels.hpp"
#pragma pack(push, 1)
struct FDirectionalLightAdvancedParametersRelative {
    uint8_t bOverride_LightingChannels : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    FAdjustedValueFloat LightSourceAngle; // 0x4
    FAdjustedValueFloat LightSourceSoftAngle; // 0x24
    FLightingChannels LightingChannels; // 0x44
    FAdjustedValueBoolean bAffectDynamicIndirectLighting; // 0x45
    FAdjustedValueBoolean bAffectTranslucentLighting; // 0x46
    FAdjustedValueBoolean bTransmission; // 0x47
    FAdjustedValueBoolean bUsedAsAtmosphereSunLight; // 0x48
    FAdjustedValueBoolean bProbeOnly; // 0x49
    char pad_4a[0x2];
}; // Size: 0x4c
#pragma pack(pop)
