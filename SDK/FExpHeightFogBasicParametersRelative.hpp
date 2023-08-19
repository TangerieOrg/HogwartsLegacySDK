#pragma once
#include <cstdint>
#include "FAdjustedValueFloat.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FExpHeightFogBasicParametersRelative {
    uint8_t bOverride_FogInscatteringColor : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    FAdjustedValueFloat ZOffset; // 0x4
    FAdjustedValueFloat FogDensity; // 0x24
    FAdjustedValueFloat FogHeightFalloff; // 0x44
    FLinearColor FogInscatteringColor; // 0x64
    FAdjustedValueFloat FogInscatteringIntensity; // 0x74
    FAdjustedValueFloat FogInscatteringSaturation; // 0x94
    FAdjustedValueFloat FogInscatteringColorDirLightLuminanceModulate; // 0xb4
    FAdjustedValueFloat FogMaxOpacity; // 0xd4
    FAdjustedValueFloat StartDistance; // 0xf4
    FAdjustedValueFloat FogCutoffDistance; // 0x114
    FAdjustedValueFloat DistantFogCloudShadowsMinimum; // 0x134
}; // Size: 0x154
#pragma pack(pop)
