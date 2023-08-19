#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UActorMeshSetupMeshFilter;
#pragma pack(push, 1)
class UActorMeshSetupMeshFilterAsset : public UDataAsset {
public:
    UActorMeshSetupMeshFilter* MeshFilter; // 0x30
    static UActorMeshSetupMeshFilterAsset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
