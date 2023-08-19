#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase {
    float Multiplier; // 0x8
    float InitialValue; // 0xc
    bool bIntegrateDeltaTime; // 0x10
    char pad_11[0x3];
    float Result; // 0x14
    float AccumulatedValue; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
