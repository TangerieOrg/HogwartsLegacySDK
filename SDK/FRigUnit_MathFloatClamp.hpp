#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase {
    float Value; // 0x8
    float Minimum; // 0xc
    float Maximum; // 0x10
    float Result; // 0x14
}; // Size: 0x18
#pragma pack(pop)
