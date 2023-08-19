#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase {
    char pad_8[0x8];
    FQuat A; // 0x10
    FQuat B; // 0x20
    float Result; // 0x30
    char pad_34[0xc];
}; // Size: 0x40
#pragma pack(pop)
