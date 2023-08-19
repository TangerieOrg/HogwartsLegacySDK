#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetControlFloat : public FRigUnitMutable {
    FName Control; // 0x68
    float weight; // 0x70
    float FloatValue; // 0x74
    FCachedRigElement CachedControlIndex; // 0x78
    char pad_8c[0x4];
}; // Size: 0x90
#pragma pack(pop)
