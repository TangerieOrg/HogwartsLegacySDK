#pragma once
#include <cstdint>
#include "ESchedulerMoonPhase.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UWorldMoonPhaseConsideration : public UQualifierConsideration {
public:
    ESchedulerMoonPhase DesiredMoonPhase; // 0x28
    char pad_29[0x7];
    static UWorldMoonPhaseConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
