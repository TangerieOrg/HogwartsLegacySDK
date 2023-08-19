#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetControlBool : public FRigUnit {
    FName Control; // 0x8
    bool BoolValue; // 0x10
    char pad_11[0x3];
    FCachedRigElement CachedControlIndex; // 0x14
}; // Size: 0x28
#pragma pack(pop)
