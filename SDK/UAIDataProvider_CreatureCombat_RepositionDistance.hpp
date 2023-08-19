#pragma once
#include <cstdint>
#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_QueryParams.hpp"
class UCreatureCombatRepositionData;
#pragma pack(push, 1)
class UAIDataProvider_CreatureCombat_RepositionDistance : public UAIDataProvider_QueryParams {
public:
    UCreatureCombatRepositionData* CombatData; // 0x40
    ECreatureDataProviderValueRangeType RangeType; // 0x48
    char pad_4c[0x4];
    static UAIDataProvider_CreatureCombat_RepositionDistance* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
