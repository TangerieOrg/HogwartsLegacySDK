#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionLogicalOR : public UAblBranchCondition {
public:
    TArray<UAblBranchCondition*> Conditions; // 0x30
    static UAblBranchConditionLogicalOR* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
