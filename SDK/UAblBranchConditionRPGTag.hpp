#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionRPGTag : public UAblTaskCondition {
public:
    FGameplayTag RPGTag; // 0x28
    bool bInverse; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionRPGTag* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
