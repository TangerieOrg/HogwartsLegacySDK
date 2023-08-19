#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase {
    float Value; // 0x8
    float Tolerance; // 0xc
    bool Result; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
