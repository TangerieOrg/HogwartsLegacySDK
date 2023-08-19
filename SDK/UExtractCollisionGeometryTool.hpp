#pragma once
#include <cstdint>
#include "USingleSelectionTool.hpp"
class UCollisionGeometryVisualizationProperties;
class UPhysicsObjectToolPropertySet;
class UPreviewGeometry;
class UPreviewMesh;
#pragma pack(push, 1)
class UExtractCollisionGeometryTool : public USingleSelectionTool {
public:
    UCollisionGeometryVisualizationProperties* VizSettings; // 0x88
    UPhysicsObjectToolPropertySet* ObjectProps; // 0x90
    UPreviewGeometry* PreviewElements; // 0x98
    UPreviewMesh* PreviewMesh; // 0xa0
    char pad_a8[0x288];
    static UExtractCollisionGeometryTool* StaticClass();
}; // Size: 0x330
#pragma pack(pop)
