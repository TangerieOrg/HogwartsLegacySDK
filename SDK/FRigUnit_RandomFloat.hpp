#pragma once
#include <cstdint>
#include "FRigUnit_MathBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_RandomFloat : public FRigUnit_MathBase {
    int32_t Seed; // 0x8
    float Minimum; // 0xc
    float Maximum; // 0x10
    float Duration; // 0x14
    float Result; // 0x18
    float LastResult; // 0x1c
    int32_t LastSeed; // 0x20
    float TimeLeft; // 0x24
}; // Size: 0x28
#pragma pack(pop)
