#pragma once
#include <cstdint>
#include "FRawDistribution.hpp"
#include "FVector.hpp"
class UDistributionVector;
#pragma pack(push, 1)
struct FRawDistributionVector : public FRawDistribution {
    float MinValue; // 0x20
    float MaxValue; // 0x24
    FVector MinValueVec; // 0x28
    FVector MaxValueVec; // 0x34
    UDistributionVector* Distribution; // 0x40
}; // Size: 0x48
#pragma pack(pop)
