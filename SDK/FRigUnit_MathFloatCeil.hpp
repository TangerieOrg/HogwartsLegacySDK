#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase {
    float Value; // 0x8
    float Result; // 0xc
    int32_t int; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
