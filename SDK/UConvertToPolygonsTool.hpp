#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
class UConvertToPolygonsToolProperties;
class UPreviewMesh;
#pragma pack(push, 1)
class UConvertToPolygonsTool : public USingleSelectionTool {
public:
    UConvertToPolygonsToolProperties* Settings; // 0x88
    UPreviewMesh* PreviewMesh; // 0x90
    char pad_98[0x348];
    static UConvertToPolygonsTool* StaticClass();
}; // Size: 0x3e0
#pragma pack(pop)
