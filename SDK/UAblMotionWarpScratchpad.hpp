#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblTaskConditionScratchpad;
#pragma pack(push, 1)
class UAblMotionWarpScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x18];
    TArray<UAblTaskConditionScratchpad*> BranchConditionScratchpads; // 0x40
    static UAblMotionWarpScratchpad* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
