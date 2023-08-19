#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBaseMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable {
    char pad_68[0x8];
    FTransform Transform; // 0x70
    FLinearColor Color; // 0xa0
    float Scale; // 0xb0
    float Thickness; // 0xb4
    FName Space; // 0xb8
    FTransform WorldOffset; // 0xc0
    bool bEnabled; // 0xf0
    char pad_f1[0xf];
}; // Size: 0x100
#pragma pack(pop)
