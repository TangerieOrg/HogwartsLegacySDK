#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblTaskConditionScratchpad;
#pragma pack(push, 1)
class UAblNpcStartReactionScratchpad : public UAblAbilityTaskScratchPad {
public:
    TArray<UAblTaskConditionScratchpad*> TaskConditionScratchpads; // 0x28
    char pad_38[0x8];
    static UAblNpcStartReactionScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
