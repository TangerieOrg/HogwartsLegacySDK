#pragma once
#include <cstdint>
#include "EEnemy_ParryCounterStepDirection.hpp"
#include "EEnemy_ParryCounterStyle.hpp"
#include "EEnemy_ParryCounterType.hpp"
#include "EEnemy_ParryDodgeStyle.hpp"
#include "EEnemy_ParryResponseType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_ParryLeadInLoopingTask : public UAblAbilityTask {
public:
    bool bOverrideRunAtDataLeadInTime; // 0x70
    char pad_71[0x3];
    float ParryLeadIn; // 0x74
    bool bOverrideDBParryToRelease; // 0x78
    char pad_79[0x3];
    float ParryToRelease; // 0x7c
    bool bOverrideDBCounterType; // 0x80
    EEnemy_ParryCounterType OverrideCounterType; // 0x81
    bool bOverrideDBResponseType; // 0x82
    EEnemy_ParryResponseType OverrideResponseType; // 0x83
    bool bOverrideDBCounterStepDirection; // 0x84
    EEnemy_ParryCounterStepDirection OverrideCounterStepDirection; // 0x85
    bool bOverrideDBCounterStyle; // 0x86
    EEnemy_ParryCounterStyle OverrideCounterStyle; // 0x87
    bool bOverrideDBDodgeStyle; // 0x88
    EEnemy_ParryDodgeStyle OverrideDodgeStyle; // 0x89
    bool bParryWindowPersistPastImpact; // 0x8a
    bool bParryWindowForceCloseOnTaskEnd; // 0x8b
    char pad_8c[0x4];
    static UAblNPC_ParryLeadInLoopingTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
