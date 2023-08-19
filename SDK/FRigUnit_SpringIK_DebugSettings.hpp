#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SpringIK_DebugSettings {
    bool bEnabled; // 0x0
    char pad_1[0x3];
    float Scale; // 0x4
    FLinearColor Color; // 0x8
    char pad_18[0x8];
    FTransform WorldOffset; // 0x20
}; // Size: 0x50
#pragma pack(pop)
