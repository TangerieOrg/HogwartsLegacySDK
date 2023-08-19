#pragma once
#include <cstdint>
#include "EClimbingLadderState\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchClimbingLadderStateCondition : public UAblBranchCondition {
public:
    TArray_EClimbingLadderState::Type> LadderStates; // 0x30
    static UAblBranchClimbingLadderStateCondition* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
