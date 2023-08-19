#pragma once
#include <cstdint>
#include "FTransform.hpp"
class UStaticMesh;
class UMaterialInterface;
#pragma pack(push, 1)
struct FHLODISMComponentDesc {
    UStaticMesh* StaticMesh; // 0x0
    UMaterialInterface* Material; // 0x8
    TArray<FTransform> Instances; // 0x10
}; // Size: 0x20
#pragma pack(pop)
