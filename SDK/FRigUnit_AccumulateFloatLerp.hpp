#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase {
    float TargetValue; // 0x8
    float InitialValue; // 0xc
    float Blend; // 0x10
    bool bIntegrateDeltaTime; // 0x14
    char pad_15[0x3];
    float Result; // 0x18
    float AccumulatedValue; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
