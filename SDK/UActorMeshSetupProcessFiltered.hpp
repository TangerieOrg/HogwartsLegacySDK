#pragma once
#include <cstdint>
#include "UActorMeshSetupProcess.hpp"
class UActorMeshSetupMeshFilter;
#pragma pack(push, 1)
class UActorMeshSetupProcessFiltered : public UActorMeshSetupProcess {
public:
    UActorMeshSetupMeshFilter* MeshFilter; // 0x28
    static UActorMeshSetupProcessFiltered* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
