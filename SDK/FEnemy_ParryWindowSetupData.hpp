#pragma once
#include <cstdint>
#include "EEnemy_ParryCounterStepDirection.hpp"
#include "EEnemy_ParryCounterStyle.hpp"
#include "EEnemy_ParryCounterType.hpp"
#include "EEnemy_ParryDodgeStyle.hpp"
#include "EEnemy_ParryResponseType.hpp"
class AActor;
#pragma pack(push, 1)
struct FEnemy_ParryWindowSetupData {
    bool bShowUI; // 0x0
    bool bPersistPastImpact; // 0x1
    bool bDilateLeadIn; // 0x2
    bool bDilateRelease; // 0x3
    bool bTargetIsPlayer; // 0x4
    bool bTargetIsOnMount; // 0x5
    char pad_6[0x2];
    AActor* TargetPtr; // 0x8
    float LeadIn; // 0x10
    float ToRelease; // 0x14
    bool bUnblockable; // 0x18
    char pad_19[0x3];
    float Perfect; // 0x1c
    float AbortDistance; // 0x20
    EEnemy_ParryCounterType CounterType; // 0x24
    EEnemy_ParryResponseType ResponseType; // 0x25
    EEnemy_ParryCounterStepDirection CounterStepDirection; // 0x26
    EEnemy_ParryCounterStyle CounterStyle; // 0x27
    EEnemy_ParryDodgeStyle DodgeStyle; // 0x28
    bool bManuallyLaunchedProjectile; // 0x29
    char pad_2a[0x6];
}; // Size: 0x30
#pragma pack(pop)
