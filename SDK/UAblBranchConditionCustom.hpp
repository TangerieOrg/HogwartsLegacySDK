#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionCustom : public UAblBranchCondition {
public:
    static UAblBranchConditionCustom* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
