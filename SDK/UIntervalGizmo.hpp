#pragma once
#include <cstdint>
#include "UInteractiveGizmo.hpp"
class UGizmoTransformChangeStateTarget;
class UTransformProxy;
class UPrimitiveComponent;
class UGizmoComponentAxisSource;
#pragma pack(push, 1)
class UIntervalGizmo : public UInteractiveGizmo {
public:
    UGizmoTransformChangeStateTarget* StateTarget; // 0x38
    char pad_40[0x10];
    UTransformProxy* TransformProxy; // 0x50
    TArray<UPrimitiveComponent*> ActiveComponents; // 0x58
    TArray<UInteractiveGizmo*> ActiveGizmos; // 0x68
    char pad_78[0x18];
    UGizmoComponentAxisSource* AxisYSource; // 0x90
    UGizmoComponentAxisSource* AxisZSource; // 0x98
    char pad_a0[0x90];
    static UIntervalGizmo* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
