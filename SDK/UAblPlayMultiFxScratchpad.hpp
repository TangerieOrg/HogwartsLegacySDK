#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblTaskConditionScratchpad;
#pragma pack(push, 1)
class UAblPlayMultiFxScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    TArray<UAblTaskConditionScratchpad*> TaskConditionScratchpads; // 0x30
    char pad_40[0x18];
    static UAblPlayMultiFxScratchpad* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
