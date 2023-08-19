#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase {
    float A; // 0x8
    float B; // 0xc
    bool Result; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
