#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase {
    bool Condition; // 0x8
    char pad_9[0x3];
    float IfTrue; // 0xc
    float IfFalse; // 0x10
    float Result; // 0x14
}; // Size: 0x18
#pragma pack(pop)
