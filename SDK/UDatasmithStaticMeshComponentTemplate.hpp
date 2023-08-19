#pragma once
#include <cstdint>
#include "UDatasmithObjectTemplate.hpp"
class UStaticMesh;
class UMaterialInterface;
#pragma pack(push, 1)
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate {
public:
    UStaticMesh* StaticMesh; // 0x30
    TArray<UMaterialInterface*> OverrideMaterials; // 0x38
    static UDatasmithStaticMeshComponentTemplate* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
