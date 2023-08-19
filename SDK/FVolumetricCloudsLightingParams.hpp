#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsLightingParams {
    float Ambient; // 0x0
    float Light; // 0x4
    float Extinction; // 0x8
    float PowderExtinction; // 0xc
    float PowderStrength; // 0x10
    float FinalOutput; // 0x14
    float SkyLightCloudsOutput; // 0x18
    float SkyLightCloudsAlpha; // 0x1c
    float SkyLightDesaturate; // 0x20
    FLinearColor SkyLightGroundColor; // 0x24
    float ShadowScale; // 0x34
    float ShadowMapCloudShadowDensity; // 0x38
    float RayMarchCloudShadowScale; // 0x3c
    float RayMarchShadowDensity; // 0x40
    float SkyLightShadowDensity; // 0x44
    float FogDensityMultiplier; // 0x48
    float HeightFogDensityMultiplier; // 0x4c
    FVector LightDirection; // 0x50
    FVector LightColor; // 0x5c
    float LightIntensity; // 0x68
    float LightSaturation; // 0x6c
}; // Size: 0x70
#pragma pack(pop)
