#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionPhase : public UAblBranchCondition {
public:
    TArray<FVector2D> PhaseRanges; // 0x30
    static UAblBranchConditionPhase* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
