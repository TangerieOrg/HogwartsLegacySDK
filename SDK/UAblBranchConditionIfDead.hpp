#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionIfDead : public UAblBranchCondition {
public:
    static UAblBranchConditionIfDead* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
