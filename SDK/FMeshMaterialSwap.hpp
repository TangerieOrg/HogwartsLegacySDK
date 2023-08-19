#pragma once
#include <cstdint>
#include "FMeshSwappedMaterial.hpp"
#pragma pack(push, 1)
struct FMeshMaterialSwap {
    TArray<FMeshSwappedMaterial> SwappedMaterials; // 0x0
}; // Size: 0x10
#pragma pack(pop)
