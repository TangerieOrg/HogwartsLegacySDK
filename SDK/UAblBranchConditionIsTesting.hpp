#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionIsTesting : public UAblBranchCondition {
public:
    static UAblBranchConditionIsTesting* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
