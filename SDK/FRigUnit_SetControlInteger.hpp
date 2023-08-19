#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetControlInteger : public FRigUnitMutable {
    FName Control; // 0x68
    int32_t weight; // 0x70
    int32_t IntegerValue; // 0x74
    FCachedRigElement CachedControlIndex; // 0x78
    char pad_8c[0x4];
}; // Size: 0x90
#pragma pack(pop)
