#pragma once
#include <cstdint>
#include "UActorMeshSetupMeshFilter.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMeshFilterOr : public UActorMeshSetupMeshFilter {
public:
    TArray<UActorMeshSetupMeshFilter*> MeshFilters; // 0x28
    static UActorMeshSetupMeshFilterOr* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
