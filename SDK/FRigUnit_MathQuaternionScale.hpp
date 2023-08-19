#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase {
    char pad_8[0x8];
    FQuat Value; // 0x10
    float Scale; // 0x20
    char pad_24[0xc];
}; // Size: 0x30
#pragma pack(pop)
