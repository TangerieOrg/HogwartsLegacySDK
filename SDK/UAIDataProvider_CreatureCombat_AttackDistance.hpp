#pragma once
#include <cstdint>
#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_QueryParams.hpp"
class UCreatureCombatAttackData;
#pragma pack(push, 1)
class UAIDataProvider_CreatureCombat_AttackDistance : public UAIDataProvider_QueryParams {
public:
    UCreatureCombatAttackData* CombatData; // 0x40
    ECreatureDataProviderValueRangeType RangeType; // 0x48
    char pad_4c[0x4];
    static UAIDataProvider_CreatureCombat_AttackDistance* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
