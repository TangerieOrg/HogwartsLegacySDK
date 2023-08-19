#pragma once
#include <cstdint>
#include "FCRFourPointBezier.hpp"
#include "FLinearColor.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit_DebugBaseMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable {
    FCRFourPointBezier Bezier; // 0x68
    float MinimumU; // 0x98
    float MaximumU; // 0x9c
    FLinearColor Color; // 0xa0
    float Thickness; // 0xb0
    int32_t Detail; // 0xb4
    FRigElementKey Space; // 0xb8
    char pad_c4[0xc];
    FTransform WorldOffset; // 0xd0
    bool bEnabled; // 0x100
    char pad_101[0xf];
}; // Size: 0x110
#pragma pack(pop)
