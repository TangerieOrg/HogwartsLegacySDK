#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UGameLogicBoolBase;
class UClass;
#pragma pack(push, 1)
class UAblGameLogicSwitchBranchTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<UGameLogicBoolBase*> BoolResults; // 0x28
    TArray<UClass*> Abilities; // 0x38
    static UAblGameLogicSwitchBranchTaskScratchPad* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
