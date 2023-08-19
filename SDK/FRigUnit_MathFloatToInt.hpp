#pragma once
#include <cstdint>
#include "FRigUnit_MathFloatBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase {
    float Value; // 0x8
    int32_t Result; // 0xc
}; // Size: 0x10
#pragma pack(pop)
