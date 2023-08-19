#pragma once
#include <cstdint>
#include "UActorMeshSetupMeshFilter.hpp"
class UActorMeshSetupMeshFilterAsset;
#pragma pack(push, 1)
class UActorMeshSetupMeshFilterUseAsset : public UActorMeshSetupMeshFilter {
public:
    UActorMeshSetupMeshFilterAsset* FilterAsset; // 0x28
    static UActorMeshSetupMeshFilterUseAsset* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
