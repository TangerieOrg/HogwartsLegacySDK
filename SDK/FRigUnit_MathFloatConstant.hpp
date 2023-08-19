#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase {
    float Value; // 0x8
    char pad_c[0x4];
}; // Size: 0x10
#pragma pack(pop)
