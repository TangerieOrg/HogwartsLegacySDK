#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit_DebugBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase {
    char pad_8[0x8];
    FQuat Value; // 0x10
    bool bEnabled; // 0x20
    char pad_21[0x3];
    float Thickness; // 0x24
    float Scale; // 0x28
    FRigElementKey Space; // 0x2c
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
