#pragma once
#include <cstdint>
#include "EEnemyHoverTaskMode.hpp"
#include "UAblAbilityTask.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
class UAblEnemyHoverTask : public UAblAbilityTask {
public:
    EEnemyHoverTaskMode Mode; // 0x70
    char pad_71[0x3];
    float HoverTime; // 0x74
    UNiagaraSystem* AttackerLocationVFX; // 0x78
    UNiagaraSystem* TargetLocationVFX; // 0x80
    UNiagaraSystem* AttackLandVFX; // 0x88
    static UAblEnemyHoverTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
