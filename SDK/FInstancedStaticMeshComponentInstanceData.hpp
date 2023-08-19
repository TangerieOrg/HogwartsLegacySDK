#pragma once
#include <cstdint>
#include "FInstancedStaticMeshInstanceData.hpp"
#include "FInstancedStaticMeshLightMapInstanceData.hpp"
#include "FSceneComponentInstanceData.hpp"
class UStaticMesh;
#pragma pack(push, 1)
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData {
    UStaticMesh* StaticMesh; // 0xb8
    FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
    TArray<float> PerInstanceSMCustomData; // 0x110
    char pad_120[0x20];
    int32_t InstancingRandomSeed; // 0x140
    char pad_144[0xc];
}; // Size: 0x150
#pragma pack(pop)
