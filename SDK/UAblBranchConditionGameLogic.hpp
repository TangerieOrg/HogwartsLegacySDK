#pragma once
#include <cstdint>
#include "FName_GameLogicBoolResult.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionGameLogic : public UAblBranchCondition {
public:
    FName_GameLogicBoolResult BoolResultName; // 0x30
    static UAblBranchConditionGameLogic* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
