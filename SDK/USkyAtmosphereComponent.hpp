#pragma once
#include <cstdint>
#include "ESkyAtmosphereTransformMode.hpp"
#include "FColor.hpp"
#include "FGuid.hpp"
#include "FLinearColor.hpp"
#include "FTentDistribution.hpp"
#include "USceneComponent.hpp"
class UTexture2D;
class UDirectionalLightComponent;
struct FVector;
#pragma pack(push, 1)
class USkyAtmosphereComponent : public USceneComponent {
public:
    FColor GroundAlbedo; // 0x220
    float AtmosphereHeight; // 0x224
    float MultiScatteringFactor; // 0x228
    float TraceSampleCountScale; // 0x22c
    float RayleighScatteringScale; // 0x230
    FLinearColor RayleighScattering; // 0x234
    float RayleighExponentialDistribution; // 0x244
    float MieScatteringScale; // 0x248
    FLinearColor MieScattering; // 0x24c
    float MieAbsorptionScale; // 0x25c
    FLinearColor MieAbsorption; // 0x260
    float MieAnisotropy; // 0x270
    float MieExponentialDistribution; // 0x274
    float OtherAbsorptionScale; // 0x278
    FLinearColor OtherAbsorption; // 0x27c
    FTentDistribution OtherTentDistribution; // 0x28c
    FLinearColor SkyLuminanceFactor; // 0x298
    float SkyDesaturation; // 0x2a8
    float AerialPespectiveViewDistanceScale; // 0x2ac
    float HeightFogContribution; // 0x2b0
    float HeightFogContributionInscattering; // 0x2b4
    float HeightFogContributionDirectionalInscaterring; // 0x2b8
    float HeightFogAccurateInscatteringColor; // 0x2bc
    float HeightFogContributionDesaturation; // 0x2c0
    float HeightFogContributionDesaturationInscattering; // 0x2c4
    float HeightFogContributionDesaturationDirectionalInscattering; // 0x2c8
    float TransmittanceMinLightElevationAngle; // 0x2cc
    float AerialPerspectiveStartDepth; // 0x2d0
    char pad_2d4[0x4];
    UTexture2D* HorizonToZenithColorationTexture; // 0x2d8
    float HorizonToZenithColorationU; // 0x2e0
    float HorizonToZenithColorationIntensity; // 0x2e4
    float HorizonToZenithColorationDesaturation; // 0x2e8
    float HorizonToZenithFogOpticalDepthScale; // 0x2ec
    float HorizonToZenithFogOpticalDepthPower; // 0x2f0
    float HorizonToZenithFogIntensity; // 0x2f4
    float HorizonToZenithFogDesaturation; // 0x2f8
    char pad_2fc[0x28];
    FGuid bStaticLightingBuiltGUID; // 0x324
    char pad_334[0xc];
    static USkyAtmosphereComponent* StaticClass();
    void SetTransmittanceMinLightElevationAngle(float NewValue);
    void SetSkyLuminanceFactor(FLinearColor NewValue);
    void SetSkyDesaturation(float NewValue);
    void SetRayleighScatteringScale(float NewValue);
    void SetRayleighScattering(FLinearColor NewValue);
    void SetRayleighExponentialDistribution(float NewValue);
    void SetOtherAbsorptionScale(float NewValue);
    void SetOtherAbsorption(FLinearColor NewValue);
    void SetMultiScatteringFactor(float NewValue);
    void SetMieScatteringScale(float NewValue);
    void SetMieScattering(FLinearColor NewValue);
    void SetMieExponentialDistribution(float NewValue);
    void SetMieAnisotropy(float NewValue);
    void SetMieAbsorptionScale(float NewValue);
    void SetMieAbsorption(FLinearColor NewValue);
    void SetHorizonToZenithFogOpticalDepthScale(float NewValue);
    void SetHorizonToZenithFogOpticalDepthPower(float NewValue);
    void SetHorizonToZenithFogIntensity(float NewValue);
    void SetHorizonToZenithFogDesaturation(float NewValue);
    void SetHorizonToZenithColorationU(float NewValue);
    void SetHorizonToZenithColorationTexture(UTexture2D* NewValue);
    void SetHorizonToZenithColorationIntensity(float NewValue);
    void SetHorizonToZenithColorationDesaturation(float NewValue);
    void SetHeightFogContributionInscattering(float NewValue);
    void SetHeightFogContributionDirectionalInscaterring(float NewValue);
    void SetHeightFogContributionDesaturationInscattering(float NewValue);
    void SetHeightFogContributionDesaturationDirectionalInscattering(float NewValue);
    void SetHeightFogContributionDesaturation(float NewValue);
    void SetHeightFogContribution(float NewValue);
    void SetHeightFogAccurateInscatteringColor(float NewValue);
    void SetAtmosphereHeight(float NewValue);
    void SetAerialPespectiveViewDistanceScale(float NewValue);
    void SetAerialPerspectiveStartDepth(float NewValue);
    void OverrideAtmosphereLightDirection(int32_t AtmosphereLightIndex, FVector& LightDirection);
    FLinearColor GetAtmosphereTransmitanceOnGroundAtPlanetTop(UDirectionalLightComponent* DirectionalLight);
}; // Size: 0x340
#pragma pack(pop)
