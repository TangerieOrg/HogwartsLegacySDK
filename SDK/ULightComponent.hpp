#pragma once
#include <cstdint>
#include "ELightCullingPriority.hpp"
#include "FColor.hpp"
#include "FLightingChannels.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "ULightComponentBase.hpp"
class UMaterialInterface;
class UTextureLightProfile;
class UTexture;
#pragma pack(push, 1)
class ULightComponent : public ULightComponentBase {
public:
    float MaxDistanceFadeRange; // 0x260
    uint8_t bUseTemperature : 1; // 0x264
    uint8_t pad_bitfield_264_1 : 7;
    char pad_265[0x3];
    int32_t ShadowMapChannel; // 0x268
    char pad_26c[0x4];
    float MinRoughness; // 0x270
    float SpecularScale; // 0x274
    float MinDistance; // 0x278
    bool bRenderAsSimpleLight; // 0x27c
    bool bSkipSimpleLightDemotion; // 0x27d
    bool bAdaptive; // 0x27e
    char pad_27f[0x1];
    float ShadowResolutionScale; // 0x280
    float ShadowBias; // 0x284
    float ShadowSlopeBias; // 0x288
    float ShadowSharpen; // 0x28c
    float ContactShadowLength; // 0x290
    uint8_t ContactShadowLengthInWS : 1; // 0x294
    uint8_t InverseSquaredFalloff : 1; // 0x294
    uint8_t CastTranslucentShadows : 1; // 0x294
    uint8_t bCastShadowsFromCinematicObjectsOnly : 1; // 0x294
    uint8_t bCastShadowsFromStaticObjectsOnly : 1; // 0x294
    uint8_t bCastShadowsFromMovableObjectsOnly : 1; // 0x294
    uint8_t bAffectDynamicIndirectLighting : 1; // 0x294
    uint8_t bForceCachedShadowsForMovablePrimitives : 1; // 0x294
    char pad_295[0x3];
    FLightingChannels LightingChannels; // 0x298
    char pad_299[0x7];
    UMaterialInterface* LightFunctionMaterial; // 0x2a0
    FVector LightFunctionScale; // 0x2a8
    char pad_2b4[0x4];
    UTextureLightProfile* IESTexture; // 0x2b8
    uint8_t bUseIESBrightness : 1; // 0x2c0
    uint8_t pad_bitfield_2c0_1 : 7;
    char pad_2c1[0x3];
    float IESBrightnessScale; // 0x2c4
    float LightFunctionFadeDistance; // 0x2c8
    float DisabledBrightness; // 0x2cc
    uint8_t bEnableLightShaftBloom : 1; // 0x2d0
    uint8_t pad_bitfield_2d0_1 : 7;
    char pad_2d1[0x3];
    float BloomScale; // 0x2d4
    float BloomThreshold; // 0x2d8
    float BloomMaxBrightness; // 0x2dc
    FColor BloomTint; // 0x2e0
    bool bUseRayTracedDistanceFieldShadows; // 0x2e4
    char pad_2e5[0x3];
    float RayStartOffsetDepthScale; // 0x2e8
    char pad_2ec[0x4];
    UTexture* wLightFunctionTexture; // 0x2f0
    float wLightFunctionIntensity; // 0x2f8
    float MinScreenRadiusForShadowCaster; // 0x2fc
    uint8_t bIgnoredByCulling : 1; // 0x300
    uint8_t pad_bitfield_300_1 : 7;
    char pad_301[0x3];
    ELightCullingPriority CullingPriority; // 0x304
    char pad_305[0x6f];
    int32_t wShadowMaxDistance; // 0x374
    int32_t wShadowFadeDistance; // 0x378
    bool wbCastShadowOnMovable; // 0x37c
    bool wbDoNotCacheShadows; // 0x37d
    char pad_37e[0x2];
    int32_t wMovableShadowMaxDistance; // 0x380
    int32_t wMovableShadowFadeDistance; // 0x384
    char pad_388[0x8];
    static ULightComponent* StaticClass();
    void SetwbDoNotCacheShadows(bool bNewValue);
    void SetwbCastShadowOnMovable(bool bNewValue);
    void SetVolumetricScatteringIntensity(float NewIntensity);
    void SetUseTemperature(bool bNewValue);
    void SetUseIESBrightness(bool bNewValue);
    void SetTransmission(bool bNewValue);
    void SetTemperature(float NewTemperature);
    void SetSpecularScale(float NewValue);
    void SetShadowSlopeBias(float NewValue);
    void SetShadowBias(float NewValue);
    void SetMinDistance(float NewValue);
    void SetMaxDrawDistance(float NewValue);
    void SetMaxDistanceFadeRange(float NewValue);
    void SetLightIntensityFColor(float NewIntensity, FColor NewLightColor);
    void SetLightIntensityColor(float NewIntensity, FLinearColor NewLightColor, bool bSRGB);
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    void SetLightFunctionScale(FVector NewLightFunctionScale);
    void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial);
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    void SetLightFunctionDisabledBrightness(float NewValue);
    void SetLightFColor(FColor NewLightColor);
    void SetLightColor(FLinearColor NewLightColor, bool bSRGB);
    void SetIntensity(float NewIntensity);
    void SetIndirectLightingIntensity(float NewIntensity);
    void SetIESTexture(UTextureLightProfile* NewValue);
    void SetIESBrightnessScale(float NewValue);
    void SetForceCachedShadowsForMovablePrimitives(bool bNewValue);
    void SetEnableLightShaftBloom(bool bNewValue);
    bool SetEditorPreviewIntensityColor(float NewIntensity, FLinearColor NewLightColor, bool bSRGB);
    bool SetEditorPreviewIntensity(float NewIntensity);
    bool SetEditorPreviewColor(FLinearColor NewLightColor, bool bSRGB);
    void SetDynamicLightColor(FLinearColor NewLightColor, bool bSRGB);
    void SetDynamicIntensity(float NewIntensity);
    void SetCastShadowsFromStaticObjectsOnly(bool bEnable);
    void SetCastShadowsFromMovableObjectsOnly(bool bEnable);
    void SetBloomTint(FColor NewValue);
    void SetBloomThreshold(float NewValue);
    void SetBloomScale(float NewValue);
    void SetBloomMaxBrightness(float NewValue);
    void SetAffectTranslucentLighting(bool bNewValue);
    void SetAffectDynamicIndirectLighting(bool bNewValue);
    bool ClearEditorPreviewIntensityColor();
    bool ClearEditorPreviewIntensity();
    bool ClearEditorPreviewColor();
}; // Size: 0x390
#pragma pack(pop)
