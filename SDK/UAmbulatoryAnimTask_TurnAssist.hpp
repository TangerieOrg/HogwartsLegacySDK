#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "FVector.hpp"
#include "UAmbulatoryTurnAssistAnimTask.hpp"
#pragma pack(push, 1)
class UAmbulatoryAnimTask_TurnAssist : public UAmbulatoryTurnAssistAnimTask {
public:
    FAlphaBlend TurningBlend; // 0x58
    FVector CurrentDirection; // 0x88
    FVector DesiredDirection; // 0x94
    float ElapsedTime; // 0xa0
    bool bTimerReset; // 0xa4
    char pad_a5[0x3];
    static UAmbulatoryAnimTask_TurnAssist* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
