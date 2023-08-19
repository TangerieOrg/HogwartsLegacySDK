#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "FTurnToTaskEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblTurnToTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<FTurnToTaskEntry> InProgressTurn; // 0x28
    FAlphaBlend TurningBlend; // 0x38
    static UAblTurnToTaskScratchPad* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
