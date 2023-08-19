#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetControlInteger : public FRigUnit {
    FName Control; // 0x8
    int32_t IntegerValue; // 0x10
    int32_t Minimum; // 0x14
    int32_t Maximum; // 0x18
    FCachedRigElement CachedControlIndex; // 0x1c
}; // Size: 0x30
#pragma pack(pop)
