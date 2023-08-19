#pragma once
#include <cstdint>
#include "EEnemy_ParryButtonPressed.hpp"
#include "EEnemy_ParryCounterStepDirection.hpp"
#include "EEnemy_ParryCounterStyle.hpp"
#include "EEnemy_ParryCounterType.hpp"
#include "EEnemy_ParryDodgeStyle.hpp"
#include "EEnemy_ParryResponseType.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FEnemy_ParryTimeToImpactData {
    float TimeToImpact; // 0x0
    int32_t WindowID; // 0x4
    FGameplayTagContainer MunitionTagContainer; // 0x8
    bool bUnblockable; // 0x28
    bool bPerfect; // 0x29
    EEnemy_ParryCounterType CounterType; // 0x2a
    EEnemy_ParryResponseType ResponseType; // 0x2b
    EEnemy_ParryCounterStepDirection CounterStepDirection; // 0x2c
    EEnemy_ParryCounterStyle CounterStyle; // 0x2d
    EEnemy_ParryDodgeStyle DodgeStyle; // 0x2e
    EEnemy_ParryButtonPressed ButtonPressed; // 0x2f
}; // Size: 0x30
#pragma pack(pop)
