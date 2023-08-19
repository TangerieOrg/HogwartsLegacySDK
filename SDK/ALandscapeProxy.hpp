#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ELandscapeLODFalloff\Type.hpp"
#include "ENavDataGatheringMode.hpp"
#include "ERendererStencilMask.hpp"
#include "ERuntimeVirtualTextureMainPassType.hpp"
#include "FBodyInstance.hpp"
#include "FGuid.hpp"
#include "FIntPoint.hpp"
#include "FLandscapeProxyMaterialOverride.hpp"
#include "FLightingChannels.hpp"
#include "FLightmassPrimitiveSettings.hpp"
#include "FLinearColor.hpp"
class UPhysicalMaterial;
class ULandscapeSplinesComponent;
class UMaterialInterface;
class USplineComponent;
class URuntimeVirtualTexture;
class UHierarchicalInstancedStaticMeshComponent;
class ULandscapeComponent;
class ULandscapeHeightfieldCollisionComponent;
class UTexture;
class UTextureRenderTarget2D;
class ULandscapeLayerInfoObject;
#pragma pack(push, 1)
class ALandscapeProxy : public AActor {
public:
    ULandscapeSplinesComponent* SplineComponent; // 0x248
    FGuid LandscapeGuid; // 0x250
    FIntPoint LandscapeSectionOffset; // 0x260
    int32_t MaxLODLevel; // 0x268
    float LODDistanceFactor; // 0x26c
    ELandscapeLODFalloff::Type LODFalloff; // 0x270
    char pad_271[0x3];
    float ComponentScreenSizeToUseSubSections; // 0x274
    float LOD0ScreenSize; // 0x278
    float LOD0DistributionSetting; // 0x27c
    float LODDistributionSetting; // 0x280
    float TessellationComponentScreenSize; // 0x284
    bool UseTessellationComponentScreenSizeFalloff; // 0x288
    char pad_289[0x3];
    float TessellationComponentScreenSizeFalloff; // 0x28c
    int32_t OccluderGeometryLOD; // 0x290
    int32_t StaticLightingLOD; // 0x294
    UPhysicalMaterial* DefaultPhysMaterial; // 0x298
    float StreamingDistanceMultiplier; // 0x2a0
    char pad_2a4[0x4];
    UMaterialInterface* LandscapeMaterial; // 0x2a8
    char pad_2b0[0x20];
    UMaterialInterface* LandscapeHoleMaterial; // 0x2d0
    TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2d8
    bool bMeshHoles; // 0x2e8
    uint8_t MeshHolesMaxLod; // 0x2e9
    char pad_2ea[0x6];
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2f0
    int32_t VirtualTextureNumLods; // 0x300
    int32_t VirtualTextureLodBias; // 0x304
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x308
    char pad_309[0x3];
    float NegativeZBoundsExtension; // 0x30c
    float PositiveZBoundsExtension; // 0x310
    char pad_314[0x4];
    TArray<ULandscapeComponent*> LandscapeComponents; // 0x318
    TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x328
    TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x338
    char pad_348[0x64];
    bool bHasLandscapeGrass; // 0x3ac
    char pad_3ad[0x3];
    float StaticLightingResolution; // 0x3b0
    uint8_t CastShadow : 1; // 0x3b4
    uint8_t bCastDynamicShadow : 1; // 0x3b4
    uint8_t bCastStaticShadow : 1; // 0x3b4
    uint8_t pad_bitfield_3b4_3 : 5;
    char pad_3b5[0x3];
    uint8_t bCastFarShadow : 1; // 0x3b8
    uint8_t pad_bitfield_3b8_1 : 7;
    char pad_3b9[0x3];
    uint8_t bCastHiddenShadow : 1; // 0x3bc
    uint8_t pad_bitfield_3bc_1 : 7;
    char pad_3bd[0x3];
    uint8_t bCastShadowAsTwoSided : 1; // 0x3c0
    uint8_t pad_bitfield_3c0_1 : 7;
    char pad_3c1[0x3];
    uint8_t bAffectDistanceFieldLighting : 1; // 0x3c4
    uint8_t pad_bitfield_3c4_1 : 7;
    FLightingChannels LightingChannels; // 0x3c5
    char pad_3c6[0x2];
    uint8_t bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3c8
    uint8_t bRenderCustomDepth : 1; // 0x3c8
    uint8_t pad_bitfield_3c8_2 : 6;
    char pad_3c9[0x3];
    ERendererStencilMask CustomDepthStencilWriteMask; // 0x3cc
    char pad_3cd[0x3];
    int32_t CustomDepthStencilValue; // 0x3d0
    float LDMaxDrawDistance; // 0x3d4
    FLightmassPrimitiveSettings LightmassSettings; // 0x3d8
    int32_t CollisionMipLevel; // 0x3f0
    int32_t SimpleCollisionMipLevel; // 0x3f4
    float CollisionThickness; // 0x3f8
    char pad_3fc[0x4];
    FBodyInstance BodyInstance; // 0x400
    uint8_t bGenerateOverlapEvents : 1; // 0x558
    uint8_t bBakeMaterialPositionOffsetIntoCollision : 1; // 0x558
    uint8_t pad_bitfield_558_2 : 6;
    char pad_559[0x3];
    int32_t ComponentSizeQuads; // 0x55c
    int32_t SubsectionSizeQuads; // 0x560
    int32_t NumSubsections; // 0x564
    uint8_t bUsedForNavigation : 1; // 0x568
    uint8_t bFillCollisionUnderLandscapeForNavmesh : 1; // 0x568
    uint8_t pad_bitfield_568_2 : 6;
    char pad_569[0x3];
    bool bUseDynamicMaterialInstance; // 0x56c
    ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x56d
    bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x56e
    bool bHasLayersContent; // 0x56f
    char pad_570[0x50];
    static ALandscapeProxy* StaticClass();
    void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);
    void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value);
    void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);
    bool LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
    void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial);
    void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName);
    void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
    void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
    void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
    void ChangeLODDistanceFactor(float InLODDistanceFactor);
    void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
}; // Size: 0x5c0
#pragma pack(pop)
