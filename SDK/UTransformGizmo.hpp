#pragma once
#include <cstdint>
#include "EToolContextCoordinateSystem.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UInteractiveGizmo.hpp"
class UTransformProxy;
class UGizmoConstantFrameAxisSource;
class UPrimitiveComponent;
class UGizmoTransformChangeStateTarget;
class UGizmoComponentAxisSource;
class UGizmoScaledTransformSource;
#pragma pack(push, 1)
class UTransformGizmo : public UInteractiveGizmo {
public:
    char pad_38[0x8];
    UTransformProxy* ActiveTarget; // 0x40
    bool bSnapToWorldGrid; // 0x48
    bool bGridSizeIsExplicit; // 0x49
    char pad_4a[0x2];
    FVector ExplicitGridSize; // 0x4c
    bool bRotationGridSizeIsExplicit; // 0x58
    char pad_59[0x3];
    FRotator ExplicitRotationGridSize; // 0x5c
    bool bSnapToWorldRotGrid; // 0x68
    bool bUseContextCoordinateSystem; // 0x69
    char pad_6a[0x2];
    EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x6c
    char pad_70[0x90];
    TArray<UPrimitiveComponent*> ActiveComponents; // 0x100
    TArray<UPrimitiveComponent*> NonuniformScaleComponents; // 0x110
    TArray<UInteractiveGizmo*> ActiveGizmos; // 0x120
    char pad_130[0x10];
    UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x140
    UGizmoComponentAxisSource* AxisXSource; // 0x148
    UGizmoComponentAxisSource* AxisYSource; // 0x150
    UGizmoComponentAxisSource* AxisZSource; // 0x158
    UGizmoComponentAxisSource* UnitAxisXSource; // 0x160
    UGizmoComponentAxisSource* UnitAxisYSource; // 0x168
    UGizmoComponentAxisSource* UnitAxisZSource; // 0x170
    UGizmoTransformChangeStateTarget* StateTarget; // 0x178
    UGizmoScaledTransformSource* ScaledTransformSource; // 0x180
    char pad_188[0x18];
    static UTransformGizmo* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
