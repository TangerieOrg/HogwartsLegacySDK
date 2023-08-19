#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase {
    float A; // 0x8
    float B; // 0xc
    float Tolerance; // 0x10
    bool Result; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
