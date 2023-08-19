#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase {
    char pad_8[0x8];
    FQuat A; // 0x10
    FQuat B; // 0x20
    float T; // 0x30
    char pad_34[0xc];
    FQuat Result; // 0x40
}; // Size: 0x50
#pragma pack(pop)
