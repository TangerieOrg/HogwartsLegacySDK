#pragma once
#include <cstdint>
#include "UActorMeshSetupMeshFilter.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMeshFilterNot : public UActorMeshSetupMeshFilter {
public:
    UActorMeshSetupMeshFilter* MeshFilter; // 0x28
    static UActorMeshSetupMeshFilterNot* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
