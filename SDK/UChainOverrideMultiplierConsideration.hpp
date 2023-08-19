#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainOverrideMultiplierConsideration : public UQualifierConsideration {
public:
    float MultiplierOverride; // 0x28
    char pad_2c[0x4];
    UQualifierConsideration* Consideration; // 0x30
    static UChainOverrideMultiplierConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
