#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FBoxSphereBounds.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#pragma pack(push, 1)
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
public:
    char pad_5c0[0x10];
    TArray<int32_t> SortedInstances; // 0x5d0
    int32_t NumBuiltInstances; // 0x5e0
    char pad_5e4[0x4];
    FBox BuiltInstanceBounds; // 0x5e8
    FBox UnbuiltInstanceBounds; // 0x604
    TArray<FBox> UnbuiltInstanceBoundsList; // 0x620
    uint8_t bEnableDensityScaling : 1; // 0x630
    uint8_t pad_bitfield_630_1 : 7;
    char pad_631[0x7];
    int32_t OcclusionLayerNumNodes; // 0x638
    FBoxSphereBounds CacheMeshExtendedBounds; // 0x63c
    bool bDisableCollision; // 0x658
    char pad_659[0x3];
    int32_t InstanceCountToRender; // 0x65c
    char pad_660[0x50];
    static UHierarchicalInstancedStaticMeshComponent* StaticClass();
    bool RemoveInstances(TArray<int32_t>& InstancesToRemove);
}; // Size: 0x6b0
#pragma pack(pop)
