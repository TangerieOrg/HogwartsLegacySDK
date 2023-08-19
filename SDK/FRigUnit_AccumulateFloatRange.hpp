#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase {
    float Value; // 0x8
    float Minimum; // 0xc
    float Maximum; // 0x10
    float AccumulatedMinimum; // 0x14
    float AccumulatedMaximum; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
