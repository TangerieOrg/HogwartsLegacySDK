#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
class UTexture2D;
#pragma pack(push, 1)
struct FSkyAtmosphereArtDirectionParameters {
    FLinearColor SkyLuminanceFactor; // 0x0
    float SkyLuminanceFactorIntensity; // 0x10
    float SkyDesaturation; // 0x14
    float AerialPespectiveViewDistanceScale; // 0x18
    float AerialPerspectiveStartDepth; // 0x1c
    float HeightFogContribution; // 0x20
    float HeightFogContributionInscattering; // 0x24
    float HeightFogContributionDirectionalInscaterring; // 0x28
    float HeightFogAccurateInscatteringColor; // 0x2c
    float HeightFogContributionDesaturation; // 0x30
    float HeightFogContributionDesaturationInscattering; // 0x34
    float HeightFogContributionDesaturationDirectionalInscattering; // 0x38
    float TransmittanceMinLightElevationAngle; // 0x3c
    UTexture2D* HorizonToZenithColorationTexture; // 0x40
    float HorizonToZenithColorationU; // 0x48
    float HorizonToZenithColorationIntensity; // 0x4c
    float HorizonToZenithColorationDesaturation; // 0x50
    float HorizonToZenithFogOpticalDepthScale; // 0x54
    float HorizonToZenithFogOpticalDepthPower; // 0x58
    float HorizonToZenithFogIntensity; // 0x5c
    float HorizonToZenithFogDesaturation; // 0x60
    char pad_64[0x4];
}; // Size: 0x68
#pragma pack(pop)
