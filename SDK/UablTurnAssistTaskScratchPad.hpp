#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "FTurnAssistTaskEntry.hpp"
#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablTurnAssistTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<FTurnAssistTaskEntry> InProgressTurn; // 0x28
    FAlphaBlend TurningBlend; // 0x38
    FVector CurrentDirection; // 0x68
    FVector DesiredDirection; // 0x74
    float FixedDeltaAngle; // 0x80
    float ElapsedTime; // 0x84
    static UablTurnAssistTaskScratchPad* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
