#pragma once
#include <cstdint>
#include "ESetMeshMaterialMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
class UMaterialInterface;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet {
public:
    ESetMeshMaterialMode MaterialMode; // 0x60
    char pad_61[0x3];
    float CheckerDensity; // 0x64
    UMaterialInterface* OverrideMaterial; // 0x68
    UMaterialInstanceDynamic* CheckerMaterial; // 0x70
    static UExistingMeshMaterialProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
