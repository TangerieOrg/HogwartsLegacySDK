#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FControlRigGizmoDefinition {
    FName GizmoName; // 0x0
    char pad_8[0x28];
    FTransform Transform; // 0x30
}; // Size: 0x60
#pragma pack(pop)
