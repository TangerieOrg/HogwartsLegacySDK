#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FGuid.hpp"
#include "FLandscapeComponentMaterialOverride.hpp"
#include "FVector4.hpp"
#include "FWeightmapLayerAllocationInfo.hpp"
#include "UPrimitiveComponent.hpp"
class UMaterialInterface;
class ULandscapeLODStreamingProxy;
struct FVector;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UTexture2D;
class ULandscapeLayerInfoObject;
#pragma pack(push, 1)
class ULandscapeComponent : public UPrimitiveComponent {
public:
    int32_t SectionBaseX; // 0x480
    int32_t SectionBaseY; // 0x484
    int32_t ComponentSizeQuads; // 0x488
    int32_t SubsectionSizeQuads; // 0x48c
    int32_t NumSubsections; // 0x490
    char pad_494[0x4];
    UMaterialInterface* OverrideMaterial; // 0x498
    UMaterialInterface* OverrideHoleMaterial; // 0x4a0
    TArray<FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x4a8
    TArray<UMaterialInstanceConstant*> MaterialInstances; // 0x4b8
    TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x4c8
    TArray<int8_t> LODIndexToMaterialIndex; // 0x4d8
    TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x4e8
    UTexture2D* XYOffsetmapTexture; // 0x4f8
    FVector4 WeightmapScaleBias; // 0x500
    float WeightmapSubsectionOffset; // 0x510
    char pad_514[0xc];
    FVector4 HeightmapScaleBias; // 0x520
    FBox CachedLocalBox; // 0x530
    char pad_54c[0x1c];
    UTexture2D* HeightmapTexture; // 0x568
    TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x570
    TArray<UTexture2D*> WeightmapTextures; // 0x580
    ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x590
    FGuid MapBuildDataId; // 0x598
    TArray<FGuid> IrrelevantLights; // 0x5a8
    int32_t CollisionMipLevel; // 0x5b8
    int32_t SimpleCollisionMipLevel; // 0x5bc
    float NegativeZBoundsExtension; // 0x5c0
    float PositiveZBoundsExtension; // 0x5c4
    float StaticLightingResolution; // 0x5c8
    int32_t ForcedLOD; // 0x5cc
    int32_t LODBias; // 0x5d0
    FGuid StateId; // 0x5d4
    FGuid BakedTextureMaterialGuid; // 0x5e4
    char pad_5f4[0x4];
    UTexture2D* GIBakedBaseColorTexture; // 0x5f8
    uint8_t MobileBlendableLayerMask; // 0x600
    char pad_601[0x7];
    UMaterialInterface* MobileMaterialInterface; // 0x608
    TArray<UMaterialInterface*> MobileMaterialInterfaces; // 0x610
    TArray<UTexture2D*> MobileWeightmapTextures; // 0x620
    char pad_630[0x70];
    static ULandscapeComponent* StaticClass();
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);
    float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);
    float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer);
}; // Size: 0x6a0
#pragma pack(pop)
