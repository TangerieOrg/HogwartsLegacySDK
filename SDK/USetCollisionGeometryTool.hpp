#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class USetCollisionGeometryToolProperties;
class UCollisionGeometryVisualizationProperties;
class UPhysicsObjectToolPropertySet;
class UMaterialInterface;
class UPreviewGeometry;
#pragma pack(push, 1)
class USetCollisionGeometryTool : public UMultiSelectionTool {
public:
    USetCollisionGeometryToolProperties* Settings; // 0x90
    UCollisionGeometryVisualizationProperties* VizSettings; // 0x98
    UPhysicsObjectToolPropertySet* CollisionProps; // 0xa0
    UMaterialInterface* LineMaterial; // 0xa8
    UPreviewGeometry* PreviewGeom; // 0xb0
    char pad_b8[0x108];
    static USetCollisionGeometryTool* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
