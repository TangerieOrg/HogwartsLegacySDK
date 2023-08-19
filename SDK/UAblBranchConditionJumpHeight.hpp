#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionJumpHeight : public UAblBranchCondition {
public:
    FVector2D Range; // 0x30
    static UAblBranchConditionJumpHeight* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
