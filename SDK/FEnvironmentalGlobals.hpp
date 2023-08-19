#pragma once
#include <cstdint>
#include "EEnvironmentalGlobalsDirectionalLightMode.hpp"
#include "FDateTime.hpp"
#include "FEnvironmentalGlobalsExtraVariables.hpp"
#include "FEnvironmentalGlobalsLastFrameExposure.hpp"
#include "FEnvironmentalGlobalsLightDirection.hpp"
#include "FEnvironmentalGlobalsPositionOrientationVelocity.hpp"
#include "FEnvironmentalGlobalsSeasonLerp.hpp"
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobals {
    float DayNight; // 0x0
    float DayNightLerp; // 0x4
    float Day; // 0x8
    float Night; // 0xc
    FEnvironmentalGlobalsLightDirection SunDirection; // 0x10
    FEnvironmentalGlobalsLightDirection MoonDirection; // 0x60
    FEnvironmentalGlobalsLightDirection LightDirection; // 0xb0
    EEnvironmentalGlobalsDirectionalLightMode DirectionalLightMode; // 0x100
    bool bDualDirectionalLightMode; // 0x101
    char pad_102[0xe];
    FEnvironmentalGlobalsPositionOrientationVelocity Camera; // 0x110
    FEnvironmentalGlobalsPositionOrientationVelocity Player; // 0x190
    float CameraEyeIndoors; // 0x210
    float CameraEyeProbeIndoors; // 0x214
    float CameraEyeWeatherIndoors; // 0x218
    float CameraEyeAudioIndoors; // 0x21c
    float CameraEyeStreamingIndoors; // 0x220
    float Overcast; // 0x224
    FDateTime DateTime; // 0x228
    FTimespan NormalizedDateTime; // 0x230
    int64_t LightsOnMask; // 0x238
    FEnvironmentalGlobalsLastFrameExposure LastFrameExposure; // 0x240
    FEnvironmentalGlobalsSeasonLerp SeasonLerp; // 0x24c
    FEnvironmentalGlobalsSeasonLerp OverrideSeasonLerp; // 0x25c
    char pad_26c[0x4];
    FEnvironmentalGlobalsExtraVariables Extras; // 0x270
}; // Size: 0x2a0
#pragma pack(pop)
