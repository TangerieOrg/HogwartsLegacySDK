#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit_DebugBaseMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable {
    char pad_68[0x8];
    FTransform Transform; // 0x70
    FLinearColor Color; // 0xa0
    float Scale; // 0xb0
    float Thickness; // 0xb4
    FRigElementKey Space; // 0xb8
    char pad_c4[0xc];
    FTransform WorldOffset; // 0xd0
    bool bEnabled; // 0x100
    char pad_101[0xf];
}; // Size: 0x110
#pragma pack(pop)
