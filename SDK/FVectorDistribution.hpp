#pragma once
#include <cstdint>
#include "FDistributionLookupTable.hpp"
#pragma pack(push, 1)
struct FVectorDistribution {
    FDistributionLookupTable Table; // 0x0
}; // Size: 0x20
#pragma pack(pop)
