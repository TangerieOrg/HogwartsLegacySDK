#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_Timeline : public FRigUnit_SimBase {
    float Speed; // 0x8
    float Time; // 0xc
    float AccumulatedValue; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
