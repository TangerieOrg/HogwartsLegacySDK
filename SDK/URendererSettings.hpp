#pragma once
#include <cstdint>
#include "EAlphaChannelMode\Type.hpp"
#include "EAntiAliasingMethod.hpp"
#include "EAutoExposureMethodUI\Type.hpp"
#include "EClearSceneOptions\Type.hpp"
#include "ECustomDepthStencil\Type.hpp"
#include "EDefaultBackBufferPixelFormat\Type.hpp"
#include "EEarlyZPass\Type.hpp"
#include "EFixedFoveationLevels\Type.hpp"
#include "EGBufferFormat\Type.hpp"
#include "ELightUnits.hpp"
#include "EMobileMSAASampleCount\Type.hpp"
#include "EMobilePlanarReflectionMode\Type.hpp"
#include "ESkinCacheDefaultBehavior.hpp"
#include "ETranslucentSortPolicy\Type.hpp"
#include "FPerPlatformBool.hpp"
#include "FPerPlatformInt.hpp"
#include "FSoftObjectPath.hpp"
#include "FVector.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class URendererSettings : public UDeveloperSettings {
public:
    uint8_t bMobileDisableVertexFog : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x3];
    int32_t MaxMobileCascades; // 0x3c
    EMobileMSAASampleCount::Type MobileMSAASampleCount; // 0x40
    char pad_41[0x3];
    uint8_t bMobileAllowDitheredLODTransition : 1; // 0x44
    uint8_t bMobileAllowSoftwareOcclusionCulling : 1; // 0x44
    uint8_t bMobileVirtualTextures : 1; // 0x44
    uint8_t bDiscardUnusedQualityLevels : 1; // 0x44
    uint8_t bOcclusionCulling : 1; // 0x44
    uint8_t pad_bitfield_44_5 : 3;
    char pad_45[0x3];
    float MinScreenRadiusForLights; // 0x48
    float MinScreenRadiusForEarlyZPass; // 0x4c
    float MinScreenRadiusForCSMdepth; // 0x50
    uint8_t bPrecomputedVisibilityWarning : 1; // 0x54
    uint8_t bTextureStreaming : 1; // 0x54
    uint8_t bUseDXT5NormalMaps : 1; // 0x54
    uint8_t bVirtualTextures : 1; // 0x54
    uint8_t bVirtualTextureEnableAutoImport : 1; // 0x54
    uint8_t bVirtualTexturedLightmaps : 1; // 0x54
    uint8_t pad_bitfield_54_6 : 2;
    char pad_55[0x3];
    uint32_t VirtualTextureTileSize; // 0x58
    uint32_t VirtualTextureTileBorderSize; // 0x5c
    uint32_t VirtualTextureFeedbackFactor; // 0x60
    uint8_t bVirtualTextureEnableCompressZlib : 1; // 0x64
    uint8_t bVirtualTextureEnableCompressCrunch : 1; // 0x64
    uint8_t bClearCoatEnableSecondNormal : 1; // 0x64
    uint8_t pad_bitfield_64_3 : 5;
    char pad_65[0x3];
    int32_t ReflectionCaptureResolution; // 0x68
    uint8_t bReflectionCaptureCompression : 1; // 0x6c
    uint8_t ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x6c
    uint8_t bForwardShading : 1; // 0x6c
    uint8_t bVertexFoggingForOpaque : 1; // 0x6c
    uint8_t bAllowStaticLighting : 1; // 0x6c
    uint8_t bUseNormalMapsForStaticLighting : 1; // 0x6c
    uint8_t bGenerateMeshDistanceFields : 1; // 0x6c
    uint8_t bEightBitMeshDistanceFields : 1; // 0x6c
    uint8_t bGenerateLandscapeGIData : 1; // 0x6d
    uint8_t bCompressMeshDistanceFields : 1; // 0x6d
    uint8_t pad_bitfield_6d_2 : 6;
    char pad_6e[0x2];
    float TessellationAdaptivePixelsPerTriangle; // 0x70
    uint8_t bSeparateTranslucency : 1; // 0x74
    uint8_t pad_bitfield_74_1 : 7;
    char pad_75[0x3];
    ETranslucentSortPolicy::Type TranslucentSortPolicy; // 0x78
    char pad_79[0x3];
    FVector TranslucentSortAxis; // 0x7c
    EFixedFoveationLevels::Type HMDFixedFoveationLevel; // 0x88
    ECustomDepthStencil::Type CustomDepthStencil; // 0x89
    char pad_8a[0x2];
    uint8_t bCustomDepthTaaJitter : 1; // 0x8c
    uint8_t pad_bitfield_8c_1 : 7;
    char pad_8d[0x3];
    EAlphaChannelMode::Type bEnableAlphaChannelInPostProcessing; // 0x90
    char pad_91[0x3];
    uint8_t bDefaultFeatureBloom : 1; // 0x94
    uint8_t bDefaultFeatureAmbientOcclusion : 1; // 0x94
    uint8_t bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x94
    uint8_t bDefaultFeatureAutoExposure : 1; // 0x94
    uint8_t pad_bitfield_94_4 : 4;
    char pad_95[0x3];
    EAutoExposureMethodUI::Type DefaultFeatureAutoExposure; // 0x98
    char pad_99[0x3];
    float DefaultFeatureAutoExposureBias; // 0x9c
    uint8_t bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; // 0xa0
    uint8_t bUsePreExposure : 1; // 0xa0
    uint8_t bEnablePreExposureOnlyInTheEditor : 1; // 0xa0
    uint8_t bDefaultFeatureMotionBlur : 1; // 0xa0
    uint8_t bDefaultFeatureLensFlare : 1; // 0xa0
    uint8_t bTemporalUpsampling : 1; // 0xa0
    uint8_t bSSGI : 1; // 0xa0
    uint8_t pad_bitfield_a0_7 : 1;
    char pad_a1[0x3];
    EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0xa4
    ELightUnits DefaultLightUnits; // 0xa5
    EDefaultBackBufferPixelFormat::Type DefaultBackBufferPixelFormat; // 0xa6
    char pad_a7[0x1];
    uint8_t bRenderUnbuiltPreviewShadowsInGame : 1; // 0xa8
    uint8_t bStencilForLODDither : 1; // 0xa8
    uint8_t pad_bitfield_a8_2 : 6;
    char pad_a9[0x3];
    EEarlyZPass::Type EarlyZPass; // 0xac
    char pad_ad[0x3];
    uint8_t bEarlyZPassOnlyMaterialMasking : 1; // 0xb0
    uint8_t bDBuffer : 1; // 0xb0
    uint8_t pad_bitfield_b0_2 : 6;
    char pad_b1[0x3];
    EClearSceneOptions::Type ClearSceneMethod; // 0xb4
    char pad_b5[0x3];
    uint8_t bBasePassOutputsVelocity : 1; // 0xb8
    uint8_t bVertexDeformationOutputsVelocity : 1; // 0xb8
    uint8_t bSelectiveBasePassOutputs : 1; // 0xb8
    uint8_t bDefaultParticleCutouts : 1; // 0xb8
    uint8_t pad_bitfield_b8_4 : 4;
    char pad_b9[0x3];
    int32_t GPUSimulationTextureSizeX; // 0xbc
    int32_t GPUSimulationTextureSizeY; // 0xc0
    uint8_t bGlobalClipPlane : 1; // 0xc4
    uint8_t pad_bitfield_c4_1 : 7;
    char pad_c5[0x3];
    EGBufferFormat::Type GBufferFormat; // 0xc8
    char pad_c9[0x3];
    uint8_t bUseGPUMorphTargets : 1; // 0xcc
    uint8_t bNvidiaAftermathEnabled : 1; // 0xcc
    uint8_t bMultiView : 1; // 0xcc
    uint8_t bMobilePostProcessing : 1; // 0xcc
    uint8_t bMobileMultiView : 1; // 0xcc
    uint8_t bMobileUseHWsRGBEncoding : 1; // 0xcc
    uint8_t bRoundRobinOcclusion : 1; // 0xcc
    uint8_t bODSCapture : 1; // 0xcc
    uint8_t bMeshStreaming : 1; // 0xcd
    uint8_t pad_bitfield_cd_1 : 7;
    char pad_ce[0x2];
    float WireframeCullThreshold; // 0xd0
    uint8_t bEnableRayTracing : 1; // 0xd4
    uint8_t bEnableRayTracingTextureLOD : 1; // 0xd4
    uint8_t bSupportStationarySkylight : 1; // 0xd4
    uint8_t bSupportLowQualityLightmaps : 1; // 0xd4
    uint8_t bSupportPointLightWholeSceneShadows : 1; // 0xd4
    uint8_t bSupportAtmosphericFog : 1; // 0xd4
    uint8_t bSupportSkyAtmosphere : 1; // 0xd4
    uint8_t bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xd4
    uint8_t bSupportSkinCacheShaders : 1; // 0xd5
    uint8_t pad_bitfield_d5_1 : 7;
    char pad_d6[0x2];
    ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0xd8
    char pad_d9[0x3];
    float SkinCacheSceneMemoryLimitInMB; // 0xdc
    uint8_t bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xe0
    uint8_t bMobileEnableMovableLightCSMShaderCulling : 1; // 0xe0
    uint8_t bMobileAllowDistanceFieldShadows : 1; // 0xe0
    uint8_t bMobileAllowMovableDirectionalLights : 1; // 0xe0
    uint8_t pad_bitfield_e0_4 : 4;
    char pad_e1[0x3];
    uint32_t MobileNumDynamicPointLights; // 0xe4
    uint8_t bMobileDynamicPointLightsUseStaticBranch : 1; // 0xe8
    uint8_t bMobileAllowMovableSpotlights : 1; // 0xe8
    uint8_t bMobileAllowMovableSpotlightShadows : 1; // 0xe8
    uint8_t bSupport16BitBoneIndex : 1; // 0xe8
    uint8_t bGPUSkinLimit2BoneInfluences : 1; // 0xe8
    uint8_t bSupportDepthOnlyIndexBuffers : 1; // 0xe8
    uint8_t bSupportReversedIndexBuffers : 1; // 0xe8
    uint8_t bLPV : 1; // 0xe8
    uint8_t bMobileAmbientOcclusion : 1; // 0xe9
    uint8_t bUseUnlimitedBoneInfluences : 1; // 0xe9
    uint8_t pad_bitfield_e9_2 : 6;
    char pad_ea[0x2];
    int32_t UnlimitedBonInfluencesThreshold; // 0xec
    FPerPlatformInt MaxSkinBones; // 0xf0
    EMobilePlanarReflectionMode::Type MobilePlanarReflectionMode; // 0xf4
    FPerPlatformBool bStreamStaticMeshLODs; // 0xf5
    char pad_f6[0x2];
    FPerPlatformInt DefaultNumStreamedStaticMeshLODs; // 0xf8
    uint8_t bMobileSupportsGen4TAA : 1; // 0xfc
    uint8_t pad_bitfield_fc_1 : 7;
    char pad_fd[0x3];
    FPerPlatformBool bStreamSkeletalMeshLODs; // 0x100
    FPerPlatformBool bDiscardSkeletalMeshOptionalLODs; // 0x101
    char pad_102[0x6];
    FSoftObjectPath VisualizeCalibrationColorMaterialPath; // 0x108
    FSoftObjectPath VisualizeCalibrationCustomMaterialPath; // 0x120
    FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath; // 0x138
    int32_t GWTiledLightIndicesBufferSizeMB; // 0x150
    int32_t GWTiledReflectionCubemapIndicesBufferSizeMB; // 0x154
    static URendererSettings* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
