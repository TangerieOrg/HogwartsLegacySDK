#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FExponentialHeightFogData.hpp"
#include "FExponentialHeightFogVolumetricLightingShadowsRange.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "USceneComponent.hpp"
class UTextureCube;
class UTexture;
#pragma pack(push, 1)
class UExponentialHeightFogComponent : public USceneComponent {
public:
    FExponentialHeightFogData SecondFogData; // 0x220
    FLinearColor FogInscatteringColor; // 0x22c
    float FogInscatteringColorDirLightLuminanceModulate; // 0x23c
    UTextureCube* InscatteringColorCubemap; // 0x240
    float InscatteringColorCubemapAngle; // 0x248
    FLinearColor InscatteringTextureTint; // 0x24c
    float FullyDirectionalInscatteringColorDistance; // 0x25c
    float NonDirectionalInscatteringColorDistance; // 0x260
    float DirectionalInscatteringExponent; // 0x264
    float DirectionalInscatteringStartDistance; // 0x268
    FLinearColor DirectionalInscatteringColor; // 0x26c
    float DirectionalInscatteringColorDirLightLuminanceModulate; // 0x27c
    float FogMaxOpacity; // 0x280
    float StartDistance; // 0x284
    float FogCutoffDistance; // 0x288
    float DistantFogCloudShadowsMinimum; // 0x28c
    bool bEnableVolumetricFog; // 0x290
    char pad_291[0x3];
    float VolumetricFogScatteringDistribution; // 0x294
    FColor VolumetricFogAlbedo; // 0x298
    FLinearColor VolumetricFogEmissive; // 0x29c
    float VolumetricFogExtinctionScale; // 0x2ac
    float VolumetricFogDistance; // 0x2b0
    float VolumetricFogStaticLightingScatteringIntensity; // 0x2b4
    float VolumetricLightingDirectionalLightScattering; // 0x2b8
    float VolumetricLightingDirectionalLightDesaturation; // 0x2bc
    FExponentialHeightFogVolumetricLightingShadowsRange VolumetricLightingShadowsMinimum; // 0x2c0
    FExponentialHeightFogVolumetricLightingShadowsRange VolumetricLightingCloudShadowsMinimum; // 0x2d0
    float VolumetricInscatteringContribution; // 0x2e0
    float VolumetricDirectionalInscatteringContribution; // 0x2e4
    float VolumetricFogHeightFogNearStartDistance; // 0x2e8
    float VolumetricFogHeightFogNearFullDistance; // 0x2ec
    float VolumetricFogHeightFogColorationBlendStartDistance; // 0x2f0
    float VolumetricFogHeightFogColorationBlendFullDistance; // 0x2f4
    float VolumetricFogHeightFogColorationBlendStrength; // 0x2f8
    FVector OverrideLightDirection; // 0x2fc
    float OverrideLightLuminance; // 0x308
    bool bOverrideLightColorsWithFogInscatteringColors; // 0x30c
    bool wUseSkyLight; // 0x30d
    char pad_30e[0x2];
    float wInscatteringColorCubemapFactor; // 0x310
    char pad_314[0x4];
    UTexture* BlueNoiseTexture; // 0x318
    float wNoiseMinFactor; // 0x320
    float wNoiseMaxFactor; // 0x324
    float wNoiseTilingSize; // 0x328
    float wNoiseSmoothStepMin; // 0x32c
    float wNoiseSmoothStepMax; // 0x330
    float wWindFactor; // 0x334
    float wDensityTweakingLightingThreshold; // 0x338
    float wDensityTweakingMinPercentage; // 0x33c
    float wAliasingReduction; // 0x340
    float EmptyCellSkyOcclusion; // 0x344
    bool bEnableVariableScatteringDistribution; // 0x348
    char pad_349[0x3];
    float MinScatteringDistribution; // 0x34c
    float MaxScatteringDistribution; // 0x350
    float ScatteringDistributionInterpStart; // 0x354
    float ScatteringDistributionInterpEnd; // 0x358
    float VolumetricFogHighQualityDistance; // 0x35c
    FVector2D DensityMapOrigin; // 0x360
    FVector2D DensityMapSize; // 0x368
    UTexture* FalloffStartMap; // 0x370
    UTexture* DensityMultiplierMap; // 0x378
    float DensityMapFalloffLength; // 0x380
    FVector2D DensityMapFalloffStartRange; // 0x384
    FVector2D DensityMapDensityRange; // 0x38c
    float wFullDensityDistance; // 0x394
    float wMinDensityFactor; // 0x398
    FVector wAddWindVelocity; // 0x39c
    float OutsideVolumeSunMultiplier; // 0x3a8
    char pad_3ac[0x4];
    static UExponentialHeightFogComponent* StaticClass();
    void wSetUseSkylight(bool Value);
    void wSetInscatteringColorCubemapFactor(float Value);
    void SetWindFactor(float Value);
    void SetVolumetricLightingShadowsMinimum(FExponentialHeightFogVolumetricLightingShadowsRange NewValue);
    void SetVolumetricLightingDirectionalLightScattering(float NewValue);
    void SetVolumetricLightingDirectionalLightDesaturation(float NewValue);
    void SetVolumetricLightingCloudShadowsMinimum(FExponentialHeightFogVolumetricLightingShadowsRange NewValue);
    void SetVolumetricInscatteringContribution(float NewValue);
    void SetVolumetricFogScatteringDistribution(float NewValue);
    void SetVolumetricFogHeightFogNearStartDistance(float NewValue);
    void SetVolumetricFogHeightFogNearFullDistance(float NewValue);
    void SetVolumetricFogHeightFogColorationBlendStrength(float NewValue);
    void SetVolumetricFogHeightFogColorationBlendStartDistance(float NewValue);
    void SetVolumetricFogHeightFogColorationBlendFullDistance(float NewValue);
    void SetVolumetricFogExtinctionScale(float NewValue);
    void SetVolumetricFogEmissive(FLinearColor NewValue);
    void SetVolumetricFogDistance(float NewValue);
    void SetVolumetricFogAlbedo(FColor NewValue);
    void SetVolumetricFog(bool bNewValue);
    void SetVolumetricDirectionalInscatteringContribution(float NewValue);
    void SetStartDistance(float Value);
    void SetScatteringDistributionInterpStart(float Value);
    void SetScatteringDistributionInterpEnd(float Value);
    void SetOverrideLightLuminance(float NewValue);
    void SetOverrideLightDirection(FVector NewValue);
    void SetNonDirectionalInscatteringColorDistance(float Value);
    void SetNoiseTilingSize(float Value);
    void SetNoiseSmoothStepMin(float Value);
    void SetNoiseSmoothStepMax(float Value);
    void SetNoiseMinFactor(float Value);
    void SetNoiseMaxFactor(float Value);
    void SetMinScatteringDistribution(float Value);
    void SetMinDensityFactor(float Value);
    void SetMaxScatteringDistribution(float Value);
    void SetInscatteringTextureTint(FLinearColor Value);
    void SetInscatteringColorCubemapAngle(float Value);
    void SetInscatteringColorCubemap(UTextureCube* Value);
    void SetHighQualityDistance(float Value);
    void SetFullyDirectionalInscatteringColorDistance(float Value);
    void SetFullDensityDistance(float Value);
    void SetFogMaxOpacity(float Value);
    void SetFogInscatteringColorDirLightLuminanceModulate(float Value);
    void SetFogInscatteringColor(FLinearColor Value);
    void SetFogHeightFalloff(float Value);
    void SetFogDensity(float Value);
    void SetFogCutoffDistance(float Value);
    void SetFalloffStartMap(UTexture* Value);
    void SetEnableVariableScatteringDistribution(bool Value);
    void SetEmptyCellSkyOcclusion(float Value);
    void SetDistantFogCloudShadowsMinimum(float Value);
    void SetDirectionalInscatteringStartDistance(float Value);
    void SetDirectionalInscatteringExponent(float Value);
    void SetDirectionalInscatteringColorDirLightLuminanceModulate(float Value);
    void SetDirectionalInscatteringColor(FLinearColor Value);
    void SetDensityTweakingMinPercentage(float Value);
    void SetDensityTweakingLightingThreshold(float Value);
    void SetDensityMultiplierMap(UTexture* Value);
    void SetDensityMapSize(FVector2D Value);
    void SetDensityMapOrigin(FVector2D Value);
    void SetDensityMapFalloffStartRange(FVector2D Value);
    void SetDensityMapFalloffLengthRange(float Value);
    void SetDensityMapDensityRange(FVector2D Value);
    void SetAliasingReduction(float Value);
    void ClearOverrideLightLuminance();
    void ClearOverrideLightDirection();
}; // Size: 0x3b0
#pragma pack(pop)
