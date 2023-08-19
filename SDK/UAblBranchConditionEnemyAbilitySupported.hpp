#pragma once
#include <cstdint>
#include "EEnemy_Ability.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionEnemyAbilitySupported : public UAblBranchCondition {
public:
    EEnemy_Ability Ability; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionEnemyAbilitySupported* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
