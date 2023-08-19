#pragma once
#include <cstdint>
#include "FVector4.hpp"
#include "FWaterMeshAccelerationStructure.hpp"
#include "USceneComponent.hpp"
class UStaticMesh;
class UTexture;
class URuntimeHierarchicalInstancedStaticMeshComponent;
class UInstancedStaticMeshComponent;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UWaterTileMeshComponent : public USceneComponent {
public:
    FVector4 LakeRelativeOffsetAndExtents; // 0x220
    float LakeSize; // 0x230
    char pad_234[0x4];
    UTexture* TextureDirAndDistToCoast; // 0x238
    UTexture* TextureFlowAndWaterDepth; // 0x240
    char pad_248[0x40];
    FWaterMeshAccelerationStructure AccelerationStructure; // 0x288
    TArray<URuntimeHierarchicalInstancedStaticMeshComponent*> HierarchicalInstancedTilesComponents; // 0x2a8
    TArray<UInstancedStaticMeshComponent*> InstancedTilesComponents; // 0x2b8
    TArray<UMaterialInstanceDynamic*> WaterMaterialInstances; // 0x2c8
    char pad_2d8[0x8];
    static UWaterTileMeshComponent* StaticClass();
    void RebuildAccelerationStructure();
}; // Size: 0x2e0
#pragma pack(pop)
