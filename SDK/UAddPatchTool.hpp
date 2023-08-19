#pragma once
#include <cstdint>
#include "USingleClickTool.hpp"
class UAddPatchToolProperties;
class UNewMeshMaterialProperties;
class UPreviewMesh;
#pragma pack(push, 1)
class UAddPatchTool : public USingleClickTool {
public:
    char pad_88[0x8];
    UAddPatchToolProperties* ShapeSettings; // 0x90
    UNewMeshMaterialProperties* MaterialProperties; // 0x98
    UPreviewMesh* PreviewMesh; // 0xa0
    char pad_a8[0x58];
    static UAddPatchTool* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
