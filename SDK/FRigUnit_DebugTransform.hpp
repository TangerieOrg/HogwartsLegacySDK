#pragma once
#include <cstdint>
#include "ERigUnitDebugTransformMode.hpp"
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugTransform : public FRigUnit_DebugBase {
    char pad_8[0x8];
    FTransform Transform; // 0x10
    ERigUnitDebugTransformMode Mode; // 0x40
    char pad_41[0x3];
    FLinearColor Color; // 0x44
    float Thickness; // 0x54
    float Scale; // 0x58
    FName Space; // 0x5c
    char pad_64[0xc];
    FTransform WorldOffset; // 0x70
    bool bEnabled; // 0xa0
    char pad_a1[0xf];
}; // Size: 0xb0
#pragma pack(pop)
