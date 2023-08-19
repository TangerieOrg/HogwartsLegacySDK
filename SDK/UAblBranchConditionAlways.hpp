#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionAlways : public UAblBranchCondition {
public:
    static UAblBranchConditionAlways* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
