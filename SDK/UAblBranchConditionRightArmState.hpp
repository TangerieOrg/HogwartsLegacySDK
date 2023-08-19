#pragma once
#include <cstdint>
#include "ERightArmPriority\Type.hpp"
#include "ERightArmState\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionRightArmState : public UAblBranchCondition {
public:
    TArray_ERightArmState::Type> RightArmStates; // 0x30
    ERightArmPriority::Type RightArmPriority; // 0x40
    char pad_41[0x7];
    static UAblBranchConditionRightArmState* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
