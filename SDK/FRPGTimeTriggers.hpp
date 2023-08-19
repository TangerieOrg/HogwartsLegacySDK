#pragma once
#include <cstdint>
#include "ETimedAbilityRetriggerBehaviour.hpp"
#include "ETimedAbilityUnit.hpp"
#include "FDateTime.hpp"
class URPGTriggerEffect_Base;
#pragma pack(push, 1)
struct FRPGTimeTriggers {
    bool bUseRatioOfLifetime; // 0x0
    ETimedAbilityUnit Unit; // 0x1
    char pad_2[0x2];
    float StartTime; // 0x4
    float StopTime; // 0x8
    ETimedAbilityRetriggerBehaviour RetriggerBehaviour; // 0xc
    char pad_d[0x3];
    URPGTriggerEffect_Base* TriggerEffect; // 0x10
    bool bIsActive; // 0x18
    bool bWasActive; // 0x19
    bool bUseIngameSimulationTime; // 0x1a
    char pad_1b[0x5];
    FDateTime StartTimeStamp; // 0x20
    FDateTime StopTimeStamp; // 0x28
    bool bRepeating; // 0x30
    char pad_31[0x3];
    float LoopPauseTime; // 0x34
}; // Size: 0x38
#pragma pack(pop)
