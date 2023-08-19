#pragma once
#include <cstdint>
#include "EComponentMobility\Type.hpp"
#include "EFoliageScaling.hpp"
#include "EHasCustomNavigableGeometry\Type.hpp"
#include "ELightmapType.hpp"
#include "ERendererStencilMask.hpp"
#include "ERuntimeVirtualTextureMainPassType.hpp"
#include "FBodyInstance.hpp"
#include "FBoxSphereBounds.hpp"
#include "FFloatInterval.hpp"
#include "FFoliageVertexColorChannelMask.hpp"
#include "FGuid.hpp"
#include "FInt32Interval.hpp"
#include "FLightingChannels.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"
#include "FoliageVertexColorMask.hpp"
#include "UObject.hpp"
class URuntimeVirtualTexture;
#pragma pack(push, 1)
class UFoliageType : public UObject {
public:
    FGuid UpdateGuid; // 0x28
    float Density; // 0x38
    float DensityAdjustmentFactor; // 0x3c
    float Radius; // 0x40
    bool bSingleInstanceModeOverrideRadius; // 0x44
    char pad_45[0x3];
    float SingleInstanceModeRadius; // 0x48
    EFoliageScaling Scaling; // 0x4c
    char pad_4d[0x3];
    FFloatInterval ScaleX; // 0x50
    FFloatInterval ScaleY; // 0x58
    FFloatInterval ScaleZ; // 0x60
    FFoliageVertexColorChannelMask VertexColorMaskByChannel[4]; // 0x68
    FoliageVertexColorMask VertexColorMask; // 0x98
    char pad_99[0x3];
    float VertexColorMaskThreshold; // 0x9c
    uint8_t VertexColorMaskInvert : 1; // 0xa0
    uint8_t pad_bitfield_a0_1 : 7;
    char pad_a1[0x3];
    FFloatInterval ZOffset; // 0xa4
    uint8_t AlignToNormal : 1; // 0xac
    uint8_t pad_bitfield_ac_1 : 7;
    char pad_ad[0x3];
    float AlignMaxAngle; // 0xb0
    uint8_t RandomYaw : 1; // 0xb4
    uint8_t pad_bitfield_b4_1 : 7;
    char pad_b5[0x3];
    float RandomPitchAngle; // 0xb8
    FFloatInterval GroundSlopeAngle; // 0xbc
    FFloatInterval Height; // 0xc4
    char pad_cc[0x4];
    TArray<FName> LandscapeLayers; // 0xd0
    float MinimumLayerWeight; // 0xe0
    char pad_e4[0x4];
    TArray<FName> ExclusionLandscapeLayers; // 0xe8
    float MinimumExclusionLayerWeight; // 0xf8
    FName LandscapeLayer; // 0xfc
    uint8_t CollisionWithWorld : 1; // 0x104
    uint8_t pad_bitfield_104_1 : 7;
    char pad_105[0x3];
    FVector CollisionScale; // 0x108
    FBoxSphereBounds MeshBounds; // 0x114
    FVector LowBoundOriginRadius; // 0x130
    EComponentMobility::Type Mobility; // 0x13c
    char pad_13d[0x3];
    FInt32Interval CullDistance; // 0x140
    uint8_t bEnableStaticLighting : 1; // 0x148
    uint8_t CastShadow : 1; // 0x148
    uint8_t bAffectDynamicIndirectLighting : 1; // 0x148
    uint8_t bAffectDistanceFieldLighting : 1; // 0x148
    uint8_t bCastDynamicShadow : 1; // 0x148
    uint8_t bCastStaticShadow : 1; // 0x148
    uint8_t bCastShadowAsTwoSided : 1; // 0x148
    uint8_t bReceivesDecals : 1; // 0x148
    uint8_t bReceivesWeatherDecals : 1; // 0x149
    uint8_t pad_bitfield_149_1 : 7;
    char pad_14a[0x2];
    uint8_t ReceivesWeatherDecalsMask; // 0x14c
    char pad_14d[0x3];
    uint8_t bOverrideLightMapRes : 1; // 0x150
    uint8_t pad_bitfield_150_1 : 7;
    char pad_151[0x3];
    int32_t OverriddenLightMapRes; // 0x154
    ELightmapType LightmapType; // 0x158
    char pad_159[0x3];
    uint8_t bUseAsOccluder : 1; // 0x15c
    uint8_t pad_bitfield_15c_1 : 7;
    char pad_15d[0x3];
    uint8_t bVisibleInRayTracing : 1; // 0x160
    uint8_t bEvaluateWorldPositionOffset : 1; // 0x160
    uint8_t pad_bitfield_160_2 : 6;
    char pad_161[0x7];
    FBodyInstance BodyInstance; // 0x168
    EHasCustomNavigableGeometry::Type CustomNavigableGeometry; // 0x2c0
    FLightingChannels LightingChannels; // 0x2c1
    char pad_2c2[0x2];
    uint8_t bRenderCustomDepth : 1; // 0x2c4
    uint8_t pad_bitfield_2c4_1 : 7;
    char pad_2c5[0x3];
    ERendererStencilMask CustomDepthStencilWriteMask; // 0x2c8
    char pad_2c9[0x3];
    int32_t CustomDepthStencilValue; // 0x2cc
    int32_t TranslucencySortPriority; // 0x2d0
    float CollisionRadius; // 0x2d4
    float ShadeRadius; // 0x2d8
    int32_t NumSteps; // 0x2dc
    float InitialSeedDensity; // 0x2e0
    float AverageSpreadDistance; // 0x2e4
    float SpreadVariance; // 0x2e8
    int32_t SeedsPerStep; // 0x2ec
    int32_t DistributionSeed; // 0x2f0
    float MaxInitialSeedOffset; // 0x2f4
    bool bCanGrowInShade; // 0x2f8
    bool bSpawnsInShade; // 0x2f9
    char pad_2fa[0x2];
    float MaxInitialAge; // 0x2fc
    float MaxAge; // 0x300
    float OverlapPriority; // 0x304
    FFloatInterval ProceduralScale; // 0x308
    FRuntimeFloatCurve ScaleCurve; // 0x310
    int32_t ChangeCount; // 0x398
    uint8_t ReapplyDensity : 1; // 0x39c
    uint8_t ReapplyRadius : 1; // 0x39c
    uint8_t ReapplyAlignToNormal : 1; // 0x39c
    uint8_t ReapplyRandomYaw : 1; // 0x39c
    uint8_t ReapplyScaling : 1; // 0x39c
    uint8_t ReapplyScaleX : 1; // 0x39c
    uint8_t ReapplyScaleY : 1; // 0x39c
    uint8_t ReapplyScaleZ : 1; // 0x39c
    uint8_t ReapplyRandomPitchAngle : 1; // 0x39d
    uint8_t ReapplyGroundSlope : 1; // 0x39d
    uint8_t ReapplyHeight : 1; // 0x39d
    uint8_t ReapplyLandscapeLayers : 1; // 0x39d
    uint8_t ReapplyZOffset : 1; // 0x39d
    uint8_t ReapplyCollisionWithWorld : 1; // 0x39d
    uint8_t ReapplyVertexColorMask : 1; // 0x39d
    uint8_t bEnableDensityScaling : 1; // 0x39d
    uint8_t bEnableDiscardOnLoad : 1; // 0x39e
    uint8_t pad_bitfield_39e_1 : 7;
    char pad_39f[0x1];
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x3a0
    int32_t VirtualTextureCullMips; // 0x3b0
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3b4
    char pad_3b5[0x3];
    static UFoliageType* StaticClass();
}; // Size: 0x3b8
#pragma pack(pop)
