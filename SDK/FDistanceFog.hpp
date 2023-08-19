#pragma once
#include <cstdint>
#include "FDistanceFogExtraVariables.hpp"
#include "FLinearColor.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FDistanceFog {
    uint8_t bOverride_FogColor : 1; // 0x0
    uint8_t bOverride_StartDistance : 1; // 0x0
    uint8_t bOverride_FullDistance : 1; // 0x0
    uint8_t bOverride_CutoffDistance : 1; // 0x0
    uint8_t bOverride_Thickness : 1; // 0x0
    uint8_t bOverride_MaxFogOpacityPercent : 1; // 0x0
    uint8_t bOverride_BlendSceneColorPercent : 1; // 0x0
    uint8_t bOverride_SkyBlendPercent : 1; // 0x0
    uint8_t bOverride_SkyDesaturation : 1; // 0x1
    uint8_t bOverride_SkyIntensityBoost : 1; // 0x1
    uint8_t bOverride_SkySamplingHorizonAngle : 1; // 0x1
    uint8_t bOverride_SkySamplingUseCameraZ : 1; // 0x1
    uint8_t bOverride_FastAtmosphereHorizonBump : 1; // 0x1
    uint8_t bOverride_FogPPMaterial : 1; // 0x1
    uint8_t bOverride_ExtraA : 1; // 0x1
    uint8_t bOverride_ExtraB : 1; // 0x1
    uint8_t bOverride_ExtraC : 1; // 0x2
    uint8_t bOverride_ExtraD : 1; // 0x2
    uint8_t bOverride_FogGradientHorizonOffset : 1; // 0x2
    uint8_t bFogColorGradient : 1; // 0x2
    uint8_t pad_bitfield_2_4 : 4;
    char pad_3[0x1];
    FName Name; // 0x4
    float OnOff; // 0xc
    FLinearColor FogColor; // 0x10
    FLinearColor FogColorZenith; // 0x20
    FLinearColor FogColorNadir; // 0x30
    float FogGradientHorizonOffset; // 0x40
    float MaxFogOpacityPercent; // 0x44
    float StartDistance; // 0x48
    float FullDistance; // 0x4c
    float CutoffDistance; // 0x50
    float Thickness; // 0x54
    float BlendSceneColorPercent; // 0x58
    float SkyBlendPercent; // 0x5c
    float SkyDesaturation; // 0x60
    float SkyIntensityBoost; // 0x64
    float SkySamplingHorizonAngle; // 0x68
    float SkySamplingUseCameraZ; // 0x6c
    float FastAtmosphereHorizonBump; // 0x70
    char pad_74[0x4];
    UMaterialInterface* FogPPMaterial; // 0x78
    FDistanceFogExtraVariables ExtraLerp; // 0x80
    FDistanceFogExtraVariables ExtraSet; // 0x120
}; // Size: 0x1c0
#pragma pack(pop)
