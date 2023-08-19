#pragma once
#include <cstdint>
#include "FRawDistribution.hpp"
class UDistributionFloat;
#pragma pack(push, 1)
struct FRawDistributionFloat : public FRawDistribution {
    float MinValue; // 0x20
    float MaxValue; // 0x24
    UDistributionFloat* Distribution; // 0x28
}; // Size: 0x30
#pragma pack(pop)
