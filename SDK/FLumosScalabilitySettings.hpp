#pragma once
#include <cstdint>
#include "ELumosContactShadows.hpp"
#include "ELumosLightingScenario.hpp"
#include "EShadowQualityLevels.hpp"
class ULumosPostProcessingAsset;
class UMaterialSwapMeshState;
#pragma pack(push, 1)
struct FLumosScalabilitySettings {
    ELumosLightingScenario Lighting; // 0x0
    char pad_1[0x3];
    float LightRadiusFactor; // 0x4
    float EmissiveDecalRatio; // 0x8
    EShadowQualityLevels CastShadowsThreshold; // 0xc
    bool bRenderAsSimpleLight; // 0xd
    bool bSkipSimpleLightDemotion; // 0xe
    bool bProjectDynamicShadows; // 0xf
    bool bCastStaticShadows; // 0x10
    bool bCastDynamicShadows; // 0x11
    bool bCastVolumetricShadow; // 0x12
    bool bCastTranslucentShadows; // 0x13
    bool bAffectVolumetricLighting; // 0x14
    bool bCastRaytracedShadow; // 0x15
    bool bWbDoNotCacheShadows; // 0x16
    bool bMovableOnly; // 0x17
    ELumosContactShadows ContactShadows; // 0x18
    char pad_19[0x3];
    float ContactShadowLength; // 0x1c
    ULumosPostProcessingAsset* PostProcessing; // 0x20
    float MinDistance; // 0x28
    float OuterConeAngle; // 0x2c
    TArray<UMaterialSwapMeshState*> CasterMeshStates; // 0x30
    bool bCasterMeshStatesIncludeChildren; // 0x40
    bool bUsePostProcessing; // 0x41
    bool bOverride_MinDistance; // 0x42
    bool bOverride_OuterConeAngle; // 0x43
    char pad_44[0x4];
}; // Size: 0x48
#pragma pack(pop)
