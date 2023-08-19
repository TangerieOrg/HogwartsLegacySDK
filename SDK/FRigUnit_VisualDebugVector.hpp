#pragma once
#include <cstdint>
#include "ERigUnitVisualDebugPointMode.hpp"
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase {
    FVector Value; // 0x8
    bool bEnabled; // 0x14
    ERigUnitVisualDebugPointMode Mode; // 0x15
    char pad_16[0x2];
    FLinearColor Color; // 0x18
    float Thickness; // 0x28
    float Scale; // 0x2c
    FName BoneSpace; // 0x30
}; // Size: 0x38
#pragma pack(pop)
