#pragma once
#include <cstdint>
#include "EEnemy_ParryCounterStepDirection.hpp"
#include "EEnemy_ParryCounterStyle.hpp"
#include "EEnemy_ParryCounterType.hpp"
#include "EEnemy_ParryDodgeStyle.hpp"
#include "EEnemy_ParryResponseType.hpp"
#include "EEnemy_ParryType.hpp"
#include "EEnemy_ParryWindowType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_ParryAdvanceTask : public UAblAbilityTask {
public:
    EEnemy_ParryWindowType Type; // 0x70
    bool bKeepWindowOpen; // 0x71
    bool bTriggerFiredEvent; // 0x72
    EEnemy_ParryType FiredEventType; // 0x73
    bool bOverrideDBParryLeadIn; // 0x74
    char pad_75[0x3];
    float ParryLeadIn; // 0x78
    bool bOverrideDBParryToRelease; // 0x7c
    char pad_7d[0x3];
    float ParryToRelease; // 0x80
    bool bOverrideDBCounterType; // 0x84
    EEnemy_ParryCounterType OverrideCounterType; // 0x85
    bool bOverrideDBResponseType; // 0x86
    EEnemy_ParryResponseType OverrideResponseType; // 0x87
    bool bOverrideDBCounterStepDirection; // 0x88
    EEnemy_ParryCounterStepDirection OverrideCounterStepDirection; // 0x89
    bool bOverrideDBCounterStyle; // 0x8a
    EEnemy_ParryCounterStyle OverrideCounterStyle; // 0x8b
    bool bOverrideDBDodgeStyle; // 0x8c
    EEnemy_ParryDodgeStyle OverrideDodgeStyle; // 0x8d
    char pad_8e[0x2];
    static UAblNPC_ParryAdvanceTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
