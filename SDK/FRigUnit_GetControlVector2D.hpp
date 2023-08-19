#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnit.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetControlVector2D : public FRigUnit {
    FName Control; // 0x8
    FVector2D Vector; // 0x10
    FVector2D Minimum; // 0x18
    FVector2D Maximum; // 0x20
    FCachedRigElement CachedControlIndex; // 0x28
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
