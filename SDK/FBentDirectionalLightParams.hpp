#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBentDirectionalLightParams {
    float BlendStartAngle; // 0x0
    float BlendEndAngle; // 0x4
    float SunIntensitFactorEnd; // 0x8
    float SkyLightIntensityFactorEnd; // 0xc
    bool bBlendSunLight; // 0x10
    bool bBlendSkyLight; // 0x11
    char pad_12[0x2];
}; // Size: 0x14
#pragma pack(pop)
