#pragma once
#include <cstdint>
#include "UParticleModuleMaterialBase.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase {
public:
    TArray<UMaterialInterface*> MeshMaterials; // 0x30
    static UParticleModuleMeshMaterial* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
