#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchCreatureMountCombatInput : public UAblTaskCondition {
public:
    bool bChargeActive; // 0x28
    char pad_29[0x7];
    static UAblBranchCreatureMountCombatInput* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
