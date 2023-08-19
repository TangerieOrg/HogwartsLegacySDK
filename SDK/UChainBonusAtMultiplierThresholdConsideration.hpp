#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainBonusAtMultiplierThresholdConsideration : public UQualifierConsideration {
public:
    float Bonus; // 0x28
    float MultiplierThreshold; // 0x2c
    UQualifierConsideration* Consideration; // 0x30
    static UChainBonusAtMultiplierThresholdConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
