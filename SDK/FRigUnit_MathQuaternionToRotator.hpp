#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase {
    char pad_8[0x8];
    FQuat Value; // 0x10
    FRotator Result; // 0x20
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
