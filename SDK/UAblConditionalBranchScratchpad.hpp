#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblTaskConditionScratchpad;
#pragma pack(push, 1)
class UAblConditionalBranchScratchpad : public UAblAbilityTaskScratchPad {
public:
    TArray<UAblTaskConditionScratchpad*> BranchConditionScratchpads; // 0x28
    char pad_38[0x8];
    static UAblConditionalBranchScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
