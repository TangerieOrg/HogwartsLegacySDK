#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FVolumetricCloudsParams {
    char pad_0[0x4];
    float CoverageChance; // 0x4
    float CoverageFocus; // 0x8
    float CoverageIntensity; // 0xc
    FVector4 PerlinCoverageFrequency; // 0x10
    FVector4 WorleyCoverageFrequency; // 0x20
    FVector CoverageOffset; // 0x30
    float WeatherScaleZRatio; // 0x3c
    float TypeChance; // 0x40
    float TypeFocus; // 0x44
    float TypeIntensity; // 0x48
    FVector TypeFrequency; // 0x4c
    FVector TypeOffset; // 0x58
    float DensityMultiplier; // 0x64
    float DetailStrength; // 0x68
    float DetailScale; // 0x6c
    float AnvilBias; // 0x70
    float PrecipitationChance; // 0x74
    float PrecipitationFocus; // 0x78
    float PrecipitationIntensity; // 0x7c
    FVector PrecipitationFrequency; // 0x80
    FVector PrecipitationOffset; // 0x8c
    float HighAltitudeChance; // 0x98
    float HighAltitudeFocus; // 0x9c
    float HighAltitudeIntensity; // 0xa0
    FVector HighAltitudeFrequency; // 0xa4
    UTexture2D* HighAltitudeClouds; // 0xb0
    float HighAltitudeScale; // 0xb8
    FVector HighAltitudeChannelMask; // 0xbc
    FVector HighAltitudeOffset; // 0xc8
    float GroundShadowsStrength; // 0xd4
    float GroundShadowsWeatherMapPreMultiply; // 0xd8
    float GroundShadowsRoilStrength; // 0xdc
    float ShapeScale; // 0xe0
    FVector2D TopBottom; // 0xe4
    float ShadowScale; // 0xec
    float ShadowMapCloudShadowDensity; // 0xf0
    float RayMarchCloudShadowScale; // 0xf4
    FVector LightDirection; // 0xf8
    FVector LightColor; // 0x104
    float LightIntensity; // 0x110
    float LightSaturation; // 0x114
    FLinearColor AmbientTop; // 0x118
    FLinearColor AmbientBottom; // 0x128
    float AmbientBlend; // 0x138
    float LightBlend; // 0x13c
    float OutputBlend; // 0x140
    float SkyLightCloudsAlpha; // 0x144
    float SkyLightCloudsOutput; // 0x148
    float SkyLightDesaturate; // 0x14c
    FLinearColor SkyLightGroundColor; // 0x150
    float ForwardScattering; // 0x160
    float BackwardScattering; // 0x164
    FLinearColor ExtinctionColor; // 0x168
    FLinearColor ScatteringColor; // 0x178
    float Extinction; // 0x188
    float PowderExtinction; // 0x18c
    float PowderStrength; // 0x190
    float WindSkew; // 0x194
    float WispyClumpy; // 0x198
    float HighAltitudeHeight; // 0x19c
    float RayMarchShadowDensity; // 0x1a0
    float SkyLightShadowDensity; // 0x1a4
    float FogDensityMultiplier; // 0x1a8
    float HeightFogDensityMultiplier; // 0x1ac
    float WeatherScale; // 0x1b0
    bool UseWindSystemDirection; // 0x1b4
    char pad_1b5[0x3];
    float WindSpeedScale; // 0x1b8
    float WeatherSpeedScale; // 0x1bc
    float HighAltitudeSpeedScale; // 0x1c0
    FVector WindSpeed; // 0x1c4
    char pad_1d0[0xc];
    FVector WeatherSpeed; // 0x1dc
    char pad_1e8[0x18];
    FVector4 HighAltitudeWind; // 0x200
    char pad_210[0xc];
    float SkyLightWeatherSpeedScale; // 0x21c
    float LayerRadius; // 0x220
    float LayerAltitudeOffset; // 0x224
    float LayerVerticalHeight; // 0x228
    float CoverageCameraFade; // 0x22c
    UTexture2D* CloudTypeLUT; // 0x230
    char pad_238[0x8];
    UTexture2D* OverrideWeather; // 0x240
    FVector ShapeNoiseMainScale; // 0x248
    FVector ShapeNoiseSecondaryScale; // 0x254
    FVector ShapeNoiseTertiaryScale; // 0x260
    FVector DetailNoiseScale; // 0x26c
    uint8_t bUseGroundShadowsWeatherMapPreMultiply : 1; // 0x278
    uint8_t bEnabled : 1; // 0x278
    uint8_t bOptimize : 1; // 0x278
    uint8_t bUseSkyAtmosphere : 1; // 0x278
    uint8_t bAllowOverrideLightDirection : 1; // 0x278
    uint8_t bAllowOverrideLightColor : 1; // 0x278
    uint8_t bAllowOverrideLightIntensity : 1; // 0x278
    uint8_t bAllowOverrideLightSaturation : 1; // 0x278
    char pad_279[0x7];
}; // Size: 0x280
#pragma pack(pop)
