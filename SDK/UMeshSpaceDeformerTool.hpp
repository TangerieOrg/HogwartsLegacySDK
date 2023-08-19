#pragma once
#include <cstdint>
#include "ENonlinearOperationType.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#include "UMeshSurfacePointTool.hpp"
class UGizmoTransformChangeStateTarget;
class UMeshOpPreviewWithBackgroundCompute;
class UTransformProxy;
class UIntervalGizmo;
class UTransformGizmo;
class UGizmoLocalFloatParameterSource;
#pragma pack(push, 1)
class UMeshSpaceDeformerTool : public UMeshSurfacePointTool {
public:
    ENonlinearOperationType SelectedOperationType; // 0xc0
    char pad_c1[0x3];
    float UpperBoundsInterval; // 0xc4
    float LowerBoundsInterval; // 0xc8
    float ModifierPercent; // 0xcc
    bool bSnapToWorldGrid; // 0xd0
    char pad_d1[0x7];
    UGizmoTransformChangeStateTarget* StateTarget; // 0xd8
    char pad_e0[0x8];
    UMeshOpPreviewWithBackgroundCompute* Preview; // 0xe8
    char pad_f0[0x20];
    FVector GizmoCenter; // 0x110
    char pad_11c[0x4];
    FQuat GizmoOrientation; // 0x120
    UIntervalGizmo* IntervalGizmo; // 0x130
    UTransformGizmo* TransformGizmo; // 0x138
    UTransformProxy* TransformProxy; // 0x140
    UGizmoLocalFloatParameterSource* UpIntervalSource; // 0x148
    UGizmoLocalFloatParameterSource* DownIntervalSource; // 0x150
    UGizmoLocalFloatParameterSource* ForwardIntervalSource; // 0x158
    char pad_160[0x60];
    static UMeshSpaceDeformerTool* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
