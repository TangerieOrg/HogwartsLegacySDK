#pragma once
#include <cstdint>
#include "FRigUnit_MathBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_NoiseFloat : public FRigUnit_MathBase {
    float Value; // 0x8
    float Speed; // 0xc
    float Frequency; // 0x10
    float Minimum; // 0x14
    float Maximum; // 0x18
    float Result; // 0x1c
    float Time; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
