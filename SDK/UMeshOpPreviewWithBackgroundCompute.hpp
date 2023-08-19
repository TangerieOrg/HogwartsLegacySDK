#pragma once
#include <cstdint>
#include "UObject.hpp"
class UPreviewMesh;
class UMaterialInterface;
#pragma pack(push, 1)
class UMeshOpPreviewWithBackgroundCompute : public UObject {
public:
    char pad_28[0x30];
    UPreviewMesh* PreviewMesh; // 0x58
    TArray<UMaterialInterface*> StandardMaterials; // 0x60
    UMaterialInterface* OverrideMaterial; // 0x70
    UMaterialInterface* WorkingMaterial; // 0x78
    char pad_80[0x10];
    static UMeshOpPreviewWithBackgroundCompute* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
