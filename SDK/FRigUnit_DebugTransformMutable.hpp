#pragma once
#include <cstdint>
#include "ERigUnitDebugTransformMode.hpp"
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBaseMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable {
    char pad_68[0x8];
    FTransform Transform; // 0x70
    ERigUnitDebugTransformMode Mode; // 0xa0
    char pad_a1[0x3];
    FLinearColor Color; // 0xa4
    float Thickness; // 0xb4
    float Scale; // 0xb8
    FName Space; // 0xbc
    char pad_c4[0xc];
    FTransform WorldOffset; // 0xd0
    bool bEnabled; // 0x100
    char pad_101[0xf];
}; // Size: 0x110
#pragma pack(pop)
