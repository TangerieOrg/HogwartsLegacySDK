#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblTaskConditionScratchpad;
#pragma pack(push, 1)
class UAblTransformMultiChildScratchpad : public UAblAbilityTaskScratchPad {
public:
    TArray<UAblTaskConditionScratchpad*> TaskConditionScratchpads; // 0x28
    char pad_38[0x78];
    static UAblTransformMultiChildScratchpad* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
