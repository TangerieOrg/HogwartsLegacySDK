#pragma once
#include <cstdint>
#include "ECreatureDataProviderValueRangeType.hpp"
#include "UAIDataProvider_QueryParams.hpp"
#pragma pack(push, 1)
class UAIDataProvider_CreatureExploreRangeFromHerdLocation : public UAIDataProvider_QueryParams {
public:
    ECreatureDataProviderValueRangeType RangeType; // 0x40
    char pad_44[0x4];
    static UAIDataProvider_CreatureExploreRangeFromHerdLocation* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
