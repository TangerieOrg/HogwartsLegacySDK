#pragma once
#include <cstdint>
#include "ECreatureStance.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchCreatureStance : public UAblBranchCondition {
public:
    bool bUseCurrentStance; // 0x30
    char pad_31[0x7];
    TArray<ECreatureStance> CreatureStances; // 0x38
    static UAblBranchCreatureStance* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
