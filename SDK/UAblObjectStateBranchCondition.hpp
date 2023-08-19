#pragma once
#include <cstdint>
#include "EObjectStateBranchCondition.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblObjectStateBranchCondition : public UAblBranchCondition {
public:
    EObjectStateBranchCondition ObjectStateBranchCondition; // 0x30
    char pad_31[0x7];
    static UAblObjectStateBranchCondition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
