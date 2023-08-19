#pragma once
#include <cstdint>
#include "EOcclusionCombineMode.hpp"
#include "ESkyLightSourceType.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "ULightComponentBase.hpp"
class UTextureCube;
class AActor;
#pragma pack(push, 1)
class USkyLightComponent : public ULightComponentBase {
public:
    UTextureCube* CubeMap; // 0x260
    float SourceCubemapAngle; // 0x268
    char pad_26c[0x4];
    TArray<AActor*> ShowOnlyActors; // 0x270
    int32_t CubemapResolution; // 0x280
    float SkyDistanceThreshold; // 0x284
    bool bCaptureEmissiveOnly; // 0x288
    bool bLowerHemisphereIsBlack; // 0x289
    char pad_28a[0x2];
    FLinearColor LowerHemisphereColor; // 0x28c
    float OcclusionMaxDistance; // 0x29c
    float Contrast; // 0x2a0
    float OcclusionExponent; // 0x2a4
    float MinOcclusion; // 0x2a8
    FColor OcclusionTint; // 0x2ac
    uint8_t bCloudAmbientOcclusion : 1; // 0x2b0
    uint8_t pad_bitfield_2b0_1 : 7;
    char pad_2b1[0x3];
    float CloudAmbientOcclusionStrength; // 0x2b4
    float CloudAmbientOcclusionExtent; // 0x2b8
    float CloudAmbientOcclusionMapResolutionScale; // 0x2bc
    float CloudAmbientOcclusionApertureScale; // 0x2c0
    EOcclusionCombineMode OcclusionCombineMode; // 0x2c4
    char pad_2c5[0x3];
    float SkyOcclusionContrast; // 0x2c8
    float SkyOcclusionExponent; // 0x2cc
    char pad_2d0[0xa8];
    UTextureCube* BlendDestinationCubemap; // 0x378
    char pad_380[0xd0];
    static USkyLightComponent* StaticClass();
    void SetVolumetricScatteringIntensity(float NewIntensity);
    void SetOcclusionTint(FColor& InTint);
    void SetOcclusionExponent(float InOcclusionExponent);
    void SetOcclusionContrast(float InOcclusionContrast);
    void SetMinOcclusion(float InMinOcclusion);
    void SetLowerHemisphereColor(FLinearColor& InLowerHemisphereColor);
    void SetLightColor(FLinearColor NewLightColor);
    void SetIntensity(float NewIntensity);
    void SetIndirectLightingIntensity(float NewIntensity);
    void SetCubemapBlend(UTextureCube* SourceCubemap, UTextureCube* DestinationCubemap, float InBlendFraction);
    void SetCubemap(UTextureCube* NewCubemap);
    void RecaptureSky();
}; // Size: 0x450
#pragma pack(pop)
