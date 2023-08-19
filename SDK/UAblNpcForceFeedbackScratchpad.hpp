#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblTaskConditionScratchpad;
#pragma pack(push, 1)
class UAblNpcForceFeedbackScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    TArray<UAblTaskConditionScratchpad*> ConditionScratchpads; // 0x30
    char pad_40[0x8];
    static UAblNpcForceFeedbackScratchpad* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
