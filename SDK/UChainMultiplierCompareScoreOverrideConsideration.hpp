#pragma once
#include <cstdint>
#include "FScoreOverrideReturnConfiguration.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainMultiplierCompareScoreOverrideConsideration : public UQualifierConsideration {
public:
    UQualifierConsideration* ConsiderationA; // 0x28
    UQualifierConsideration* ConsiderationB; // 0x30
    FScoreOverrideReturnConfiguration ALargerThanB; // 0x38
    FScoreOverrideReturnConfiguration AEqualToB; // 0x50
    FScoreOverrideReturnConfiguration ASmallerThanB; // 0x68
    static UChainMultiplierCompareScoreOverrideConsideration* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
