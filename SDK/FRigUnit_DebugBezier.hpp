#pragma once
#include <cstdint>
#include "FCRFourPointBezier.hpp"
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBaseMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable {
    FCRFourPointBezier Bezier; // 0x68
    float MinimumU; // 0x98
    float MaximumU; // 0x9c
    FLinearColor Color; // 0xa0
    float Thickness; // 0xb0
    int32_t Detail; // 0xb4
    FName Space; // 0xb8
    FTransform WorldOffset; // 0xc0
    bool bEnabled; // 0xf0
    char pad_f1[0xf];
}; // Size: 0x100
#pragma pack(pop)
