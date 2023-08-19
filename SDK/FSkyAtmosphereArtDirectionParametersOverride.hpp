#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FSkyAtmosphereArtDirectionParametersOverride {
    uint8_t bOverride_SkyLuminanceFactor : 1; // 0x0
    uint8_t bOverride_SkyLuminanceFactorIntensity : 1; // 0x0
    uint8_t bOverride_SkyDesaturation : 1; // 0x0
    uint8_t bOverride_AerialPespectiveViewDistanceScale : 1; // 0x0
    uint8_t bOverride_AerialPerspectiveStartDepth : 1; // 0x0
    uint8_t bOverride_HeightFogContribution : 1; // 0x0
    uint8_t bOverride_HeightFogContributionInscattering : 1; // 0x0
    uint8_t bOverride_HeightFogContributionDirectionalInscaterring : 1; // 0x0
    uint8_t bOverride_HeightFogAccurateInscatteringColor : 1; // 0x1
    uint8_t bOverride_HeightFogContributionDesaturation : 1; // 0x1
    uint8_t bOverride_TransmittanceMinLightElevationAngle : 1; // 0x1
    uint8_t bOverride_HorizonToZenithColorationTexture : 1; // 0x1
    uint8_t bOverride_HorizonToZenithColorationU : 1; // 0x1
    uint8_t bOverride_HorizonToZenithColorationIntensity : 1; // 0x1
    uint8_t bOverride_HorizonToZenithColorationDesaturation : 1; // 0x1
    uint8_t bOverride_HeightFogContributionDesaturationInscattering : 1; // 0x1
    uint8_t bOverride_HeightFogContributionDesaturationDirectionalInscattering : 1; // 0x2
    uint8_t bOverride_HorizonToZenithFogOpticalDepthScale : 1; // 0x2
    uint8_t bOverride_HorizonToZenithFogOpticalDepthPower : 1; // 0x2
    uint8_t bOverride_HorizonToZenithFogIntensity : 1; // 0x2
    uint8_t bOverride_HorizonToZenithFogDesaturation : 1; // 0x2
    uint8_t pad_bitfield_2_5 : 3;
    char pad_3[0x1];
    FLinearColor SkyLuminanceFactor; // 0x4
    float SkyLuminanceFactorIntensity; // 0x14
    float SkyDesaturation; // 0x18
    float AerialPespectiveViewDistanceScale; // 0x1c
    float AerialPerspectiveStartDepth; // 0x20
    float HeightFogContribution; // 0x24
    float HeightFogContributionInscattering; // 0x28
    float HeightFogContributionDirectionalInscaterring; // 0x2c
    float HeightFogAccurateInscatteringColor; // 0x30
    float HeightFogContributionDesaturation; // 0x34
    float HeightFogContributionDesaturationInscattering; // 0x38
    float HeightFogContributionDesaturationDirectionalInscattering; // 0x3c
    float TransmittanceMinLightElevationAngle; // 0x40
    char pad_44[0x4];
    UTexture2D* HorizonToZenithColorationTexture; // 0x48
    float HorizonToZenithColorationU; // 0x50
    float HorizonToZenithColorationIntensity; // 0x54
    float HorizonToZenithColorationDesaturation; // 0x58
    float HorizonToZenithFogOpticalDepthScale; // 0x5c
    float HorizonToZenithFogOpticalDepthPower; // 0x60
    float HorizonToZenithFogIntensity; // 0x64
    float HorizonToZenithFogDesaturation; // 0x68
    char pad_6c[0x4];
}; // Size: 0x70
#pragma pack(pop)
