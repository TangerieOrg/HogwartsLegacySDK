#pragma once
#include <cstdint>
#include "ERigUnitVisualDebugPointMode.hpp"
#include "FLinearColor.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit_DebugBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase {
    FVector Value; // 0x8
    bool bEnabled; // 0x14
    ERigUnitVisualDebugPointMode Mode; // 0x15
    char pad_16[0x2];
    FLinearColor Color; // 0x18
    float Thickness; // 0x28
    float Scale; // 0x2c
    FRigElementKey Space; // 0x30
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
