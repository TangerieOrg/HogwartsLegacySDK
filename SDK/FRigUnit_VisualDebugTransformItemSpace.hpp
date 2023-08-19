#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#include "FRigUnit_DebugBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase {
    char pad_8[0x8];
    FTransform Value; // 0x10
    bool bEnabled; // 0x40
    char pad_41[0x3];
    float Thickness; // 0x44
    float Scale; // 0x48
    FRigElementKey Space; // 0x4c
    char pad_58[0x8];
}; // Size: 0x60
#pragma pack(pop)
