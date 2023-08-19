#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FLinearColor.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetControlColor : public FRigUnitMutable {
    FName Control; // 0x68
    FLinearColor Color; // 0x70
    FCachedRigElement CachedControlIndex; // 0x80
    char pad_94[0x4];
}; // Size: 0x98
#pragma pack(pop)
