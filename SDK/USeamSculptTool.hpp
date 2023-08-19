#pragma once
#include <cstdint>
#include "UDynamicMeshBrushTool.hpp"
class USeamSculptToolProperties;
class UPreviewGeometry;
#pragma pack(push, 1)
class USeamSculptTool : public UDynamicMeshBrushTool {
public:
    USeamSculptToolProperties* Settings; // 0x1f8
    UPreviewGeometry* PreviewGeom; // 0x200
    char pad_208[0xd0];
    static USeamSculptTool* StaticClass();
}; // Size: 0x2d8
#pragma pack(pop)
