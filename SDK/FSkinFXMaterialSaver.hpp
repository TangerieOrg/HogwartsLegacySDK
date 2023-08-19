#pragma once
#include <cstdint>
class UMeshComponent;
class UMaterialInterface;
#pragma pack(push, 1)
struct FSkinFXMaterialSaver {
    UMeshComponent* Mesh; // 0x0
    TArray<UMaterialInterface*> OriginalMaterials; // 0x8
}; // Size: 0x18
#pragma pack(pop)
