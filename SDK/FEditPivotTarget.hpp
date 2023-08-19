#pragma once
#include <cstdint>
class UTransformProxy;
class UTransformGizmo;
#pragma pack(push, 1)
struct FEditPivotTarget {
    UTransformProxy* TransformProxy; // 0x0
    UTransformGizmo* TransformGizmo; // 0x8
}; // Size: 0x10
#pragma pack(pop)
