#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UAmbulatoryAnimTask.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UAmbulatoryTurnAssistAnimTask : public UAmbulatoryAnimTask {
public:
    bool bUseFixedDirection; // 0x30
    char pad_31[0x7];
    UCurveFloat* TurnAssistCurve; // 0x38
    UCurveFloat* TurnAssistTimeMultiplier; // 0x40
    FVector2D ResetTimerWithinRange; // 0x48
    char pad_50[0x8];
    static UAmbulatoryTurnAssistAnimTask* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
