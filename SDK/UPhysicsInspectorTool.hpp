#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class UCollisionGeometryVisualizationProperties;
class UPhysicsObjectToolPropertySet;
class UMaterialInterface;
class UPreviewGeometry;
#pragma pack(push, 1)
class UPhysicsInspectorTool : public UMultiSelectionTool {
public:
    UCollisionGeometryVisualizationProperties* VizSettings; // 0x90
    TArray<UPhysicsObjectToolPropertySet*> ObjectData; // 0x98
    UMaterialInterface* LineMaterial; // 0xa8
    TArray<UPreviewGeometry*> PreviewElements; // 0xb0
    char pad_c0[0x18];
    static UPhysicsInspectorTool* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
