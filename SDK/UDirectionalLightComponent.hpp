#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FLightmassDirectionalLightSettings.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "ULightComponent.hpp"
#pragma pack(push, 1)
class UDirectionalLightComponent : public ULightComponent {
public:
    float OcclusionMaskDarkness; // 0x390
    float OcclusionDepthRange; // 0x394
    FVector LightShaftOverrideDirection; // 0x398
    float WholeSceneDynamicShadowRadius; // 0x3a4
    float DynamicShadowDistanceMovableLight; // 0x3a8
    float DynamicShadowDistanceStationaryLight; // 0x3ac
    int32_t DynamicShadowCascades; // 0x3b0
    float CascadeDistributionExponent; // 0x3b4
    float CascadeTransitionFraction; // 0x3b8
    float ShadowDistanceFadeoutFraction; // 0x3bc
    uint8_t bUseInsetShadowsForMovableObjects : 1; // 0x3c0
    uint8_t pad_bitfield_3c0_1 : 7;
    char pad_3c1[0x3];
    int32_t FarShadowCascadeCount; // 0x3c4
    float FarShadowDistance; // 0x3c8
    float DistanceFieldShadowDistance; // 0x3cc
    float CachedDirectionalShadowDistance; // 0x3d0
    float LightSourceAngle; // 0x3d4
    float LightSourceSoftAngle; // 0x3d8
    float ShadowSourceAngleFactor; // 0x3dc
    float TraceDistance; // 0x3e0
    uint8_t bUsedAsAtmosphereSunLight : 1; // 0x3e4
    uint8_t pad_bitfield_3e4_1 : 7;
    char pad_3e5[0x3];
    int32_t AtmosphereSunLightIndex; // 0x3e8
    FLinearColor AtmosphereSunDiskColorScale; // 0x3ec
    uint8_t bPerPixelAtmosphereTransmittance : 1; // 0x3fc
    uint8_t bCastShadowsOnClouds : 1; // 0x3fc
    uint8_t bCastShadowsOnAtmosphere : 1; // 0x3fc
    uint8_t bCastCloudShadows : 1; // 0x3fc
    uint8_t pad_bitfield_3fc_4 : 4;
    char pad_3fd[0x3];
    float CloudShadowStrength; // 0x400
    float CloudShadowOnAtmosphereStrength; // 0x404
    float CloudShadowOnSurfaceStrength; // 0x408
    FVector2D CloudShadowMinMax; // 0x40c
    float CloudShadowDepthBias; // 0x414
    float CloudShadowExtent; // 0x418
    float CloudShadowMapResolutionScale; // 0x41c
    float CloudShadowRaySampleCountScale; // 0x420
    FLinearColor CloudScatteredLuminanceScale; // 0x424
    FLightmassDirectionalLightSettings LightmassSettings; // 0x434
    uint8_t bCastModulatedShadows : 1; // 0x444
    uint8_t pad_bitfield_444_1 : 7;
    char pad_445[0x3];
    FColor ModulatedShadowColor; // 0x448
    float ShadowAmount; // 0x44c
    float AtmosphereSunLightPriority; // 0x450
    uint8_t bUseCachedDirectionalShadowMaps : 1; // 0x454
    uint8_t bUseCachedDirectionalShadowParallaxCorrection : 1; // 0x454
    uint8_t bPseudoLight : 1; // 0x454
    uint8_t pad_bitfield_454_3 : 5;
    char pad_455[0xb];
    static UDirectionalLightComponent* StaticClass();
    void SetShadowDistanceFadeoutFraction(float NewValue);
    void SetShadowAmount(float NewValue);
    void SetPseudoLight(bool bNewValue);
    void SetOcclusionMaskDarkness(float NewValue);
    void SetOcclusionDepthRange(float NewValue);
    void SetLightShaftOverrideDirection(FVector NewValue);
    void SetEnableLightShaftOcclusion(bool bNewValue);
    void SetDynamicShadowDistanceStationaryLight(float NewValue);
    void SetDynamicShadowDistanceMovableLight(float NewValue);
    void SetDynamicShadowCascades(int32_t NewValue);
    void SetCloudShadowOnSurfaceStrength(float NewValue);
    void SetCloudShadowMinMax(FVector2D NewValue);
    void SetCascadeTransitionFraction(float NewValue);
    void SetCascadeDistributionExponent(float NewValue);
    void SetAtmosphereSunLightPriority(float NewValue);
    void SetAtmosphereSunLightIndex(int32_t NewValue);
    void SetAtmosphereSunLight(bool bNewValue);
}; // Size: 0x460
#pragma pack(pop)
