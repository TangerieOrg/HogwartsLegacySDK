#pragma once
#include <cstdint>
#include "ERigUnitDebugPointMode.hpp"
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBaseMutable.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable {
    FVector Vector; // 0x68
    ERigUnitDebugPointMode Mode; // 0x74
    char pad_75[0x3];
    FLinearColor Color; // 0x78
    float Scale; // 0x88
    float Thickness; // 0x8c
    FName Space; // 0x90
    char pad_98[0x8];
    FTransform WorldOffset; // 0xa0
    bool bEnabled; // 0xd0
    char pad_d1[0xf];
}; // Size: 0xe0
#pragma pack(pop)
