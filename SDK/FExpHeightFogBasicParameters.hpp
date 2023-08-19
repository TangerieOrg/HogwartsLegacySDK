#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FExpHeightFogBasicParameters {
    float ZOffset; // 0x0
    float FogDensity; // 0x4
    float FogHeightFalloff; // 0x8
    FLinearColor FogInscatteringColor; // 0xc
    float FogInscatteringIntensity; // 0x1c
    float FogInscatteringSaturation; // 0x20
    float FogInscatteringColorDirLightLuminanceModulate; // 0x24
    float FogMaxOpacity; // 0x28
    float StartDistance; // 0x2c
    float FogCutoffDistance; // 0x30
    float DistantFogCloudShadowsMinimum; // 0x34
    float ZBase; // 0x38
}; // Size: 0x3c
#pragma pack(pop)
