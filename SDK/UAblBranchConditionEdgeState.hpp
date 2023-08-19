#pragma once
#include <cstdint>
#include "EEdgeState\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionEdgeState : public UAblBranchCondition {
public:
    TArray_EEdgeState::Type> EdgeStates; // 0x30
    static UAblBranchConditionEdgeState* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
