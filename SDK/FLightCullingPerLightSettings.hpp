#pragma once
#include <cstdint>
#include "FLightCullingPerLightAdvancedSettings.hpp"
#include "FLightCullingPerLightFeatureSettings.hpp"
#pragma pack(push, 1)
struct FLightCullingPerLightSettings {
    FLightCullingPerLightFeatureSettings LightingFeatures; // 0x0
    FLightCullingPerLightAdvancedSettings Advanced; // 0x1
    uint8_t bDisableDistanceCullingOverride : 1; // 0x2
    uint8_t pad_bitfield_2_1 : 7;
}; // Size: 0x3
#pragma pack(pop)
