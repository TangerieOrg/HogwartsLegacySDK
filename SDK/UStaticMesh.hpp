#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FBoxSphereBounds.hpp"
#include "FPerPlatformInt.hpp"
#include "FStaticMaterial.hpp"
#include "FVector.hpp"
#include "UStreamableRenderAsset.hpp"
class UBodySetup;
class UStaticMeshSocket;
class UObject;
class UAssetUserData;
class UNavCollisionBase;
class UMaterialInterface;
class UStaticMeshDescription;
#pragma pack(push, 1)
class UStaticMesh : public UStreamableRenderAsset {
public:
    char pad_60[0x20];
    FPerPlatformInt MinLOD; // 0x80
    int32_t ShadowMinLOD; // 0x84
    bool bCastShadowAsBackfacedMinLOD; // 0x88
    char pad_89[0x3];
    float LpvBiasMultiplier; // 0x8c
    TArray<FStaticMaterial> StaticMaterials; // 0x90
    float LightmapUVDensity; // 0xa0
    int32_t LightMapResolution; // 0xa4
    int32_t LightMapCoordinateIndex; // 0xa8
    float DistanceFieldSelfShadowBias; // 0xac
    UBodySetup* BodySetup; // 0xb0
    int32_t LODForCollision; // 0xb8
    uint8_t bGenerateMeshDistanceField : 1; // 0xbc
    uint8_t bStripComplexCollisionForConsole : 1; // 0xbc
    uint8_t bHasNavigationData : 1; // 0xbc
    uint8_t bSupportUniformlyDistributedSampling : 1; // 0xbc
    uint8_t bSupportPhysicalMaterialMasks : 1; // 0xbc
    uint8_t bSupportRayTracing : 1; // 0xbc
    uint8_t bIsBuiltAtRuntime : 1; // 0xbc
    uint8_t pad_bitfield_bc_7 : 1;
    uint8_t bAllowCPUAccess : 1; // 0xbd
    uint8_t bSupportGpuUniformlyDistributedSampling : 1; // 0xbd
    uint8_t pad_bitfield_bd_2 : 6;
    char pad_be[0x22];
    TArray<UStaticMeshSocket*> Sockets; // 0xe0
    char pad_f0[0x10];
    FVector PositiveBoundsExtension; // 0x100
    FVector NegativeBoundsExtension; // 0x10c
    FBoxSphereBounds ExtendedBounds; // 0x118
    int32_t ElementToIgnoreForTexFactor; // 0x134
    TArray<UAssetUserData*> AssetUserData; // 0x138
    UObject* EditableMesh; // 0x148
    UNavCollisionBase* NavCollision; // 0x150
    static UStaticMesh* StaticClass();
    void SetStaticMaterials(TArray<FStaticMaterial>& InStaticMaterials);
    void RemoveSocket(UStaticMeshSocket* Socket);
    TArray<FStaticMaterial> GetStaticMaterials();
    int32_t GetNumSections(int32_t InLOD);
    int32_t GetNumLODs();
    void GetMinimumLODForPlatforms();
    int32_t GetMinimumLODForPlatform(FName& PlatformName);
    int32_t GetMaterialIndex(FName MaterialSlotName);
    UMaterialInterface* GetMaterial(int32_t MaterialIndex);
    FBoxSphereBounds GetBounds();
    FBox GetBoundingBox();
    UStaticMeshSocket* FindSocket(FName InSocketName);
    static UStaticMeshDescription* CreateStaticMeshDescription(UObject* Outer);
    void BuildFromStaticMeshDescriptions(TArray<UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision);
    void AddSocket(UStaticMeshSocket* Socket);
    FName AddMaterial(UMaterialInterface* Material);
}; // Size: 0x158
#pragma pack(pop)
