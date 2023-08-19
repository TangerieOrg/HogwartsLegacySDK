#pragma once
#include <cstdint>
#include "ELightUnits.hpp"
#include "FBasicLightBloomDescription.hpp"
#include "FBasicLightShadowDescription.hpp"
#include "FColor.hpp"
#include "FLightingChannels.hpp"
#pragma pack(push, 1)
struct FBasicLightDescription {
    ELightUnits IntensityUnits; // 0x0
    char pad_1[0x3];
    float Intensity; // 0x4
    float AttenuationRadius; // 0x8
    FColor LightColor; // 0xc
    float Temperature; // 0x10
    float VolumetricScatteringIntensity; // 0x14
    float SpecularScale; // 0x18
    FBasicLightShadowDescription Shadows; // 0x1c
    FLightingChannels LightingChannels; // 0x38
    char pad_39[0x3];
    FBasicLightBloomDescription Bloom; // 0x3c
    uint8_t bAffectTranslucentLighting : 1; // 0x48
    uint8_t bTransmission : 1; // 0x48
    uint8_t bAffectReflection : 1; // 0x48
    uint8_t bUseTemperature : 1; // 0x48
    uint8_t bEnableLightShaftBloom : 1; // 0x48
    uint8_t pad_bitfield_48_5 : 3;
    char pad_49[0x3];
}; // Size: 0x4c
#pragma pack(pop)
