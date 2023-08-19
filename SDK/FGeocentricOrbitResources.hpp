#pragma once
#include <cstdint>
class UStaticMesh;
class UMaterialInterface;
#pragma pack(push, 1)
struct FGeocentricOrbitResources {
    UStaticMesh* MarkerMesh; // 0x0
    UMaterialInterface* MarkerMaterial; // 0x8
    UMaterialInterface* TextMaterial; // 0x10
    UStaticMesh* VectorMesh; // 0x18
    UMaterialInterface* VectorMaterial; // 0x20
}; // Size: 0x28
#pragma pack(pop)
