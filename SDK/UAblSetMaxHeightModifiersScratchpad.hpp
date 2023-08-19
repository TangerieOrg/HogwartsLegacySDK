#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblTaskConditionScratchpad;
#pragma pack(push, 1)
class UAblSetMaxHeightModifiersScratchpad : public UAblAbilityTaskScratchPad {
public:
    TArray<UAblTaskConditionScratchpad*> ConditionScratchpads; // 0x28
    static UAblSetMaxHeightModifiersScratchpad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
