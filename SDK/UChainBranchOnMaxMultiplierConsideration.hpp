#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainBranchOnMaxMultiplierConsideration : public UQualifierConsideration {
public:
    UQualifierConsideration* ConsiderationA; // 0x28
    UQualifierConsideration* ConsiderationB; // 0x30
    static UChainBranchOnMaxMultiplierConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
