#pragma once
#include <cstdint>
#include "EShadowQualityLevels.hpp"
#include "FColor.hpp"
#include "FGuid.hpp"
#include "FLinearColor.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class ULightComponentBase : public USceneComponent {
public:
    char pad_220[0x8];
    float Brightness; // 0x228
    float Intensity; // 0x22c
    FColor LightColor; // 0x230
    uint8_t bAffectsWorld : 1; // 0x234
    uint8_t CastShadows : 1; // 0x234
    uint8_t pad_bitfield_234_2 : 6;
    char pad_235[0x3];
    EShadowQualityLevels CastShadowsThreshold; // 0x238
    char pad_239[0x3];
    uint8_t CastStaticShadows : 1; // 0x23c
    uint8_t CastDynamicShadows : 1; // 0x23c
    uint8_t bAffectTranslucentLighting : 1; // 0x23c
    uint8_t bTransmission : 1; // 0x23c
    uint8_t bCastVolumetricShadow : 1; // 0x23c
    uint8_t bCastDeepShadow : 1; // 0x23c
    uint8_t bCastRaytracedShadow : 1; // 0x23c
    uint8_t bAffectReflection : 1; // 0x23c
    uint8_t wAffectVolumetricLighting : 1; // 0x23d
    uint8_t bAffectGlobalIllumination : 1; // 0x23d
    uint8_t pad_bitfield_23d_2 : 6;
    char pad_23e[0x2];
    float DeepShadowLayerDistribution; // 0x240
    uint8_t bProbeOnly : 1; // 0x244
    uint8_t ProjectDynamicShadows : 1; // 0x244
    uint8_t CastMovableCinematicShadows : 1; // 0x244
    uint8_t pad_bitfield_244_3 : 5;
    char pad_245[0x3];
    float IndirectLightingIntensity; // 0x248
    float VolumetricScatteringIntensity; // 0x24c
    int32_t SamplesPerPixel; // 0x250
    char pad_254[0xc];
    static ULightComponentBase* StaticClass();
    void SetSamplesPerPixel(int32_t NewValue);
    void SetProjectShadow(bool bNewValue);
    void SetCastVolumetricShadow(bool bNewValue);
    void SetCastShadows(bool bNewValue);
    void SetCastRaytracedShadow(bool bNewValue);
    void SetCastMovableCinematicShadows(bool bNewValue);
    void SetCastDeepShadow(bool bNewValue);
    void SetAffectReflection(bool bNewValue);
    void SetAffectGlobalIllumination(bool bNewValue);
    FLinearColor GetLightColor();
    bool GetCastShadows();
}; // Size: 0x260
#pragma pack(pop)
