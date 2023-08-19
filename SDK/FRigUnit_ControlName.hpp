#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_ControlName : public FRigUnit {
    FName Control; // 0x8
}; // Size: 0x10
#pragma pack(pop)
