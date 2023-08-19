#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UTuningConsideration : public UQualifierConsideration {
public:
    int32_t Rank; // 0x28
    float Bonus; // 0x2c
    float Multiplier; // 0x30
    char pad_34[0x4];
    static UTuningConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
