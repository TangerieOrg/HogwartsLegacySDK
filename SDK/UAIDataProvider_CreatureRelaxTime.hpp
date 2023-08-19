#pragma once
#include <cstdint>
#include "ECreatureDataProviderValueRangeType.hpp"
#include "ECreatureStance.hpp"
#include "UAIDataProvider_QueryParams.hpp"
#pragma pack(push, 1)
class UAIDataProvider_CreatureRelaxTime : public UAIDataProvider_QueryParams {
public:
    ECreatureStance Stance; // 0x40
    char pad_41[0x3];
    ECreatureDataProviderValueRangeType RangeType; // 0x44
    static UAIDataProvider_CreatureRelaxTime* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
