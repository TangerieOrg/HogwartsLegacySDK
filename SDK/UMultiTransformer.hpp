#pragma once
#include <cstdint>
#include "UObject.hpp"
class UInteractiveGizmoManager;
class UTransformGizmo;
class UTransformProxy;
#pragma pack(push, 1)
class UMultiTransformer : public UObject {
public:
    char pad_28[0x48];
    UInteractiveGizmoManager* GizmoManager; // 0x70
    char pad_78[0x68];
    UTransformGizmo* TransformGizmo; // 0xe0
    UTransformProxy* TransformProxy; // 0xe8
    char pad_f0[0x50];
    static UMultiTransformer* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
