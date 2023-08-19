#pragma once
#include <cstdint>
class UStaticMesh;
class UMaterialInterface;
#pragma pack(push, 1)
struct FHLODInstancingKey {
    UStaticMesh* StaticMesh; // 0x0
    UMaterialInterface* Material; // 0x8
}; // Size: 0x10
#pragma pack(pop)
