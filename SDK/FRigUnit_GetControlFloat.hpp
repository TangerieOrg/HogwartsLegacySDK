#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetControlFloat : public FRigUnit {
    FName Control; // 0x8
    float FloatValue; // 0x10
    float Minimum; // 0x14
    float Maximum; // 0x18
    FCachedRigElement CachedControlIndex; // 0x1c
}; // Size: 0x30
#pragma pack(pop)
