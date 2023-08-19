#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetControlBool : public FRigUnitMutable {
    FName Control; // 0x68
    bool BoolValue; // 0x70
    char pad_71[0x3];
    FCachedRigElement CachedControlIndex; // 0x74
}; // Size: 0x88
#pragma pack(pop)
