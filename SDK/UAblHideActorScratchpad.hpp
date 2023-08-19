#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblTaskConditionScratchpad;
#pragma pack(push, 1)
class UAblHideActorScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    TArray<UAblTaskConditionScratchpad*> TaskConditionScratchpads; // 0x30
    static UAblHideActorScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
