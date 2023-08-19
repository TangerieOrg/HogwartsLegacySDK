#pragma once
#include <cstdint>
#include "EEnemyShieldBreaker.hpp"
#include "EEnemy_ParryCounterStepDirection.hpp"
#include "EEnemy_ParryCounterStyle.hpp"
#include "EEnemy_ParryCounterType.hpp"
#include "EEnemy_ParryDodgeStyle.hpp"
#include "EEnemy_ParryResponseType.hpp"
#pragma pack(push, 1)
struct FCreatureCombatAttackParryData {
    bool bUnblockableByPlayer; // 0x0
    EEnemyShieldBreaker UnblockableByNPC; // 0x1
    char pad_2[0x2];
    float ParryLeadIn; // 0x4
    float ParryToRelease; // 0x8
    float ParryPerfectBegin; // 0xc
    EEnemy_ParryCounterType ParryCounterType; // 0x10
    EEnemy_ParryResponseType ParryResponseType; // 0x11
    EEnemy_ParryCounterStepDirection ParryCounterStepDirection; // 0x12
    EEnemy_ParryCounterStyle ParryCounterStyle; // 0x13
    EEnemy_ParryDodgeStyle ParryDodgeStyle; // 0x14
    char pad_15[0x3];
    float ParryAbortDistance; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
