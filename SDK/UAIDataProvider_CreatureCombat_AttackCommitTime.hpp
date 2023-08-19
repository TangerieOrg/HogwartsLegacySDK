#pragma once
#include <cstdint>
#include "UAIDataProvider_QueryParams.hpp"
class UCreatureCombatAttackData;
#pragma pack(push, 1)
class UAIDataProvider_CreatureCombat_AttackCommitTime : public UAIDataProvider_QueryParams {
public:
    UCreatureCombatAttackData* CombatData; // 0x40
    static UAIDataProvider_CreatureCombat_AttackCommitTime* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
