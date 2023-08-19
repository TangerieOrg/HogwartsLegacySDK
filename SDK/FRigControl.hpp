#pragma once
#include <cstdint>
#include "ERigControlAxis.hpp"
#include "ERigControlType.hpp"
#include "FLinearColor.hpp"
#include "FRigControlValue.hpp"
#include "FRigElement.hpp"
#include "FTransform.hpp"
class UEnum;
#pragma pack(push, 1)
struct FRigControl : public FRigElement {
    ERigControlType ControlType; // 0x18
    char pad_19[0x3];
    FName DisplayName; // 0x1c
    FName ParentName; // 0x24
    int32_t ParentIndex; // 0x2c
    FName SpaceName; // 0x30
    int32_t SpaceIndex; // 0x38
    char pad_3c[0x4];
    FTransform OffsetTransform; // 0x40
    FRigControlValue InitialValue; // 0x70
    FRigControlValue Value; // 0xf0
    ERigControlAxis PrimaryAxis; // 0x170
    bool bIsCurve; // 0x171
    bool bAnimatable; // 0x172
    bool bLimitTranslation; // 0x173
    bool bLimitRotation; // 0x174
    bool bLimitScale; // 0x175
    bool bDrawLimits; // 0x176
    char pad_177[0x9];
    FRigControlValue MinimumValue; // 0x180
    FRigControlValue MaximumValue; // 0x200
    bool bGizmoEnabled; // 0x280
    bool bGizmoVisible; // 0x281
    char pad_282[0x2];
    FName GizmoName; // 0x284
    char pad_28c[0x4];
    FTransform GizmoTransform; // 0x290
    FLinearColor GizmoColor; // 0x2c0
    TArray<int32_t> Dependents; // 0x2d0
    bool bIsTransientControl; // 0x2e0
    char pad_2e1[0x7];
    UEnum* ControlEnum; // 0x2e8
}; // Size: 0x2f0
#pragma pack(pop)
