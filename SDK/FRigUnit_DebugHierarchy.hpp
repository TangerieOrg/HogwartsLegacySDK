#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRigUnit_DebugBaseMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable {
    float Scale; // 0x68
    FLinearColor Color; // 0x6c
    float Thickness; // 0x7c
    FTransform WorldOffset; // 0x80
    bool bEnabled; // 0xb0
    char pad_b1[0xf];
}; // Size: 0xc0
#pragma pack(pop)
