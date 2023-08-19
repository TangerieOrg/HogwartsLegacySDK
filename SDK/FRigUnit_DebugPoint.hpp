#pragma once
#include <cstdint>
#include "ERigUnitDebugPointMode.hpp"
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBase.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugPoint : public FRigUnit_DebugBase {
    FVector Vector; // 0x8
    ERigUnitDebugPointMode Mode; // 0x14
    char pad_15[0x3];
    FLinearColor Color; // 0x18
    float Scale; // 0x28
    float Thickness; // 0x2c
    FName Space; // 0x30
    char pad_38[0x8];
    FTransform WorldOffset; // 0x40
    bool bEnabled; // 0x70
    char pad_71[0xf];
}; // Size: 0x80
#pragma pack(pop)
