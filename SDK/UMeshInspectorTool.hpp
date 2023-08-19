#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
class UMeshInspectorProperties;
class ULineSetComponent;
class UExistingMeshMaterialProperties;
class UMaterialInterface;
class UPreviewMesh;
#pragma pack(push, 1)
class UMeshInspectorTool : public USingleSelectionTool {
public:
    UMeshInspectorProperties* Settings; // 0x88
    UExistingMeshMaterialProperties* MaterialSettings; // 0x90
    char pad_98[0x8];
    UPreviewMesh* PreviewMesh; // 0xa0
    ULineSetComponent* DrawnLineSet; // 0xa8
    UMaterialInterface* DefaultMaterial; // 0xb0
    char pad_b8[0x70];
    static UMeshInspectorTool* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
