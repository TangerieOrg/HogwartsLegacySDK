#pragma once
#include <cstdint>
#include "UActorMeshSetupMeshFilter.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMeshFilterHasStaticMeshAsset : public UActorMeshSetupMeshFilter {
public:
    char pad_28[0x28];
    static UActorMeshSetupMeshFilterHasStaticMeshAsset* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
