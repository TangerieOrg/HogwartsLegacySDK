#pragma once
#include <cstdint>
#include "UBaseBrushTool.hpp"
class UPreviewMesh;
#pragma pack(push, 1)
class UDynamicMeshBrushTool : public UBaseBrushTool {
public:
    UPreviewMesh* PreviewMesh; // 0x1b8
    char pad_1c0[0x38];
    static UDynamicMeshBrushTool* StaticClass();
}; // Size: 0x1f8
#pragma pack(pop)
