#pragma once
#include <cstdint>
#include "EJumpingType\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionJumpType : public UAblBranchCondition {
public:
    EJumpingType::Type JumpType; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionJumpType* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
