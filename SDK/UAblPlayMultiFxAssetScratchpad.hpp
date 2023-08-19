#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UAblTaskConditionScratchpad;
#pragma pack(push, 1)
class UAblPlayMultiFxAssetScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x8];
    TArray<UAblTaskConditionScratchpad*> TaskConditionScratchpads; // 0x30
    char pad_40[0x8];
    static UAblPlayMultiFxAssetScratchpad* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
