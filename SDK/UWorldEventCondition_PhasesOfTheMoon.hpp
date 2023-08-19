#pragma once
#include <cstdint>
#include "ESchedulerMoonPhase.hpp"
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_PhasesOfTheMoon : public UWorldEventCondition {
public:
    TArray<ESchedulerMoonPhase> MoonPhasesToCheck; // 0x38
    static UWorldEventCondition_PhasesOfTheMoon* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
