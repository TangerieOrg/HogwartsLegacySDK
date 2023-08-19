#pragma once
#include <cstdint>
#include "EFullBodyState\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionFullBodyState : public UAblBranchCondition {
public:
    EFullBodyState::Type FullBodyState; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionFullBodyState* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
