#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UEnemyHiddenTeleportAttackComponent;
#pragma pack(push, 1)
class UAblEnemyHiddenTeleportAttackScratchpad : public UAblAbilityTaskScratchPad {
public:
    UEnemyHiddenTeleportAttackComponent* EnemyHiddenTeleportAttackComp; // 0x28
    static UAblEnemyHiddenTeleportAttackScratchpad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
