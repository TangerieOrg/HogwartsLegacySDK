#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainEliminateScoreBelowActiveInactiveThresholdConsideration : public UQualifierConsideration {
public:
    float ThesholdWhenActive; // 0x28
    float ThesholdWhenInactive; // 0x2c
    UQualifierConsideration* Consideration; // 0x30
    static UChainEliminateScoreBelowActiveInactiveThresholdConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
