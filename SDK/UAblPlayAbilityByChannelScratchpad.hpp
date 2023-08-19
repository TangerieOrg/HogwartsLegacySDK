#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblTaskConditionScratchpad;
#pragma pack(push, 1)
class UAblPlayAbilityByChannelScratchpad : public UAblAbilityTaskScratchPad {
public:
    TArray<UAblTaskConditionScratchpad*> TaskConditionScratchpads; // 0x28
    static UAblPlayAbilityByChannelScratchpad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
