#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase {
    float A; // 0x8
    float B; // 0xc
    float T; // 0x10
    float Result; // 0x14
}; // Size: 0x18
#pragma pack(pop)
