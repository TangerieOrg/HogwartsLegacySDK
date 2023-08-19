#pragma once
#include <cstdint>
#include "EAnimMechanicType\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionAnimMechanic : public UAblBranchCondition {
public:
    EAnimMechanicType::Type AnimMechanicType; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionAnimMechanic* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
