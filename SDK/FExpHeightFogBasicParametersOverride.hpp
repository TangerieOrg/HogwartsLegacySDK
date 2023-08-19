#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FExpHeightFogBasicParametersOverride {
    uint8_t bOverride_ZOffset : 1; // 0x0
    uint8_t bOverride_FogDensity : 1; // 0x0
    uint8_t bOverride_FogHeightFalloff : 1; // 0x0
    uint8_t bOverride_FogInscatteringColor : 1; // 0x0
    uint8_t bOverride_FogMaxOpacity : 1; // 0x0
    uint8_t bOverride_StartDistance : 1; // 0x0
    uint8_t bOverride_FogCutoffDistance : 1; // 0x0
    uint8_t bOverride_FogInscatteringIntensity : 1; // 0x0
    uint8_t bOverride_FogInscatteringSaturation : 1; // 0x1
    uint8_t bOverride_DistantFogCloudShadowsMinimum : 1; // 0x1
    uint8_t bOverride_FogInscatteringColorDirLightLuminanceModulate : 1; // 0x1
    uint8_t pad_bitfield_1_3 : 5;
    char pad_2[0x2];
    float ZOffset; // 0x4
    float FogDensity; // 0x8
    float FogHeightFalloff; // 0xc
    FLinearColor FogInscatteringColor; // 0x10
    float FogInscatteringIntensity; // 0x20
    float FogInscatteringSaturation; // 0x24
    float FogInscatteringColorDirLightLuminanceModulate; // 0x28
    float FogMaxOpacity; // 0x2c
    float StartDistance; // 0x30
    float FogCutoffDistance; // 0x34
    float DistantFogCloudShadowsMinimum; // 0x38
}; // Size: 0x3c
#pragma pack(pop)
