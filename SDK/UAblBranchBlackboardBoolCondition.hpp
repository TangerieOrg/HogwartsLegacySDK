#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchBlackboardBoolCondition : public UAblBranchCondition {
public:
    FName BlackboardKeyName; // 0x30
    static UAblBranchBlackboardBoolCondition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
