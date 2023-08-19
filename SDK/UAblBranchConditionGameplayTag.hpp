#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionGameplayTag : public UAblTaskCondition {
public:
    FGameplayTagContainer TagContainer; // 0x28
    bool bInverse; // 0x48
    char pad_49[0x7];
    static UAblBranchConditionGameplayTag* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
