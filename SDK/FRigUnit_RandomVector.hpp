#pragma once
#include <cstdint>
#include "FRigUnit_MathBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_RandomVector : public FRigUnit_MathBase {
    int32_t Seed; // 0x8
    float Minimum; // 0xc
    float Maximum; // 0x10
    float Duration; // 0x14
    FVector Result; // 0x18
    FVector LastResult; // 0x24
    int32_t LastSeed; // 0x30
    float TimeLeft; // 0x34
}; // Size: 0x38
#pragma pack(pop)
