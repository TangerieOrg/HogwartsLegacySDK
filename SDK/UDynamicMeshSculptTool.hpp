#pragma once
#include <cstdint>
#include "UMeshSurfacePointTool.hpp"
class USculptBrushProperties;
class UDynamicSculptToolActions;
class UMeshEditingViewProperties;
class UBrushSculptProperties;
class UFixedPlaneBrushProperties;
class USculptMaxBrushProperties;
class UBrushRemeshProperties;
class UKelvinBrushProperties;
class UBrushStampIndicator;
class UTransformGizmo;
class UMaterialInstanceDynamic;
class UPreviewMesh;
class UOctreeDynamicMeshComponent;
class UTransformProxy;
#pragma pack(push, 1)
class UDynamicMeshSculptTool : public UMeshSurfacePointTool {
public:
    USculptBrushProperties* BrushProperties; // 0xc0
    UBrushSculptProperties* SculptProperties; // 0xc8
    USculptMaxBrushProperties* SculptMaxBrushProperties; // 0xd0
    UKelvinBrushProperties* KelvinBrushProperties; // 0xd8
    UBrushRemeshProperties* RemeshProperties; // 0xe0
    UFixedPlaneBrushProperties* GizmoProperties; // 0xe8
    UMeshEditingViewProperties* ViewProperties; // 0xf0
    UDynamicSculptToolActions* SculptToolActions; // 0xf8
    char pad_100[0x40];
    UBrushStampIndicator* BrushIndicator; // 0x140
    UMaterialInstanceDynamic* BrushIndicatorMaterial; // 0x148
    UPreviewMesh* BrushIndicatorMesh; // 0x150
    UOctreeDynamicMeshComponent* DynamicMeshComponent; // 0x158
    UMaterialInstanceDynamic* ActiveOverrideMaterial; // 0x160
    char pad_168[0xba0];
    UTransformGizmo* PlaneTransformGizmo; // 0xd08
    UTransformProxy* PlaneTransformProxy; // 0xd10
    char pad_d18[0x8];
    static UDynamicMeshSculptTool* StaticClass();
}; // Size: 0xd20
#pragma pack(pop)
