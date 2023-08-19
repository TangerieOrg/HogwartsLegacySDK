#pragma once
#include <cstdint>
#include "FRigUnit_MathBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_NoiseVector : public FRigUnit_MathBase {
    FVector Position; // 0x8
    FVector Speed; // 0x14
    FVector Frequency; // 0x20
    float Minimum; // 0x2c
    float Maximum; // 0x30
    FVector Result; // 0x34
    FVector Time; // 0x40
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
