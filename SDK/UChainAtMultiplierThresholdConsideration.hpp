#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainAtMultiplierThresholdConsideration : public UQualifierConsideration {
public:
    float MultiplierThreshold; // 0x28
    char pad_2c[0x4];
    UQualifierConsideration* TestConsideration; // 0x30
    UQualifierConsideration* ChainConsideration; // 0x38
    static UChainAtMultiplierThresholdConsideration* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
