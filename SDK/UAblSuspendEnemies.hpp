#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSuspendEnemies : public UAblAbilityTask {
public:
    bool bDisableSuspendHideForCombatPlants; // 0x70
    char pad_71[0x7];
    static UAblSuspendEnemies* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
