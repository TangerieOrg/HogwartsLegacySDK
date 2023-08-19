#pragma once
#include <cstdint>
#include "FConstraintDescriptor.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FConstraintData {
    FConstraintDescriptor Constraint; // 0x0
    float weight; // 0x10
    bool bMaintainOffset; // 0x14
    char pad_15[0xb];
    FTransform Offset; // 0x20
    FTransform CurrentTransform; // 0x50
}; // Size: 0x80
#pragma pack(pop)
