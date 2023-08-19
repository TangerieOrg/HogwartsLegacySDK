#pragma once
#include <cstdint>
#include "UMeshSurfacePointTool.hpp"
class USculptBrushProperties;
class UWorkPlaneProperties;
class UMeshEditingViewProperties;
class UMaterialInstanceDynamic;
class UBrushStampIndicator;
class UTransformGizmo;
class UPreviewMesh;
class UTransformProxy;
#pragma pack(push, 1)
class UMeshSculptToolBase : public UMeshSurfacePointTool {
public:
    USculptBrushProperties* BrushProperties; // 0xc0
    UWorkPlaneProperties* GizmoProperties; // 0xc8
    char pad_d0[0x7a0];
    UMeshEditingViewProperties* ViewProperties; // 0x870
    UMaterialInstanceDynamic* ActiveOverrideMaterial; // 0x878
    UBrushStampIndicator* BrushIndicator; // 0x880
    UMaterialInstanceDynamic* BrushIndicatorMaterial; // 0x888
    UPreviewMesh* BrushIndicatorMesh; // 0x890
    UTransformGizmo* PlaneTransformGizmo; // 0x898
    UTransformProxy* PlaneTransformProxy; // 0x8a0
    char pad_8a8[0x138];
    static UMeshSculptToolBase* StaticClass();
}; // Size: 0x9e0
#pragma pack(pop)
