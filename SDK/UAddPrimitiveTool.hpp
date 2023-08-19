#pragma once
#include <cstdint>
#include "USingleClickTool.hpp"
class UProceduralShapeToolProperties;
class UNewMeshMaterialProperties;
class UPreviewMesh;
class ULastActorInfo;
#pragma pack(push, 1)
class UAddPrimitiveTool : public USingleClickTool {
public:
    char pad_88[0x8];
    UProceduralShapeToolProperties* ShapeSettings; // 0x90
    UNewMeshMaterialProperties* MaterialProperties; // 0x98
    UPreviewMesh* PreviewMesh; // 0xa0
    ULastActorInfo* LastGenerated; // 0xa8
    FString AssetName; // 0xb0
    char pad_c0[0x30];
    static UAddPrimitiveTool* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
