#pragma once
#include <cstdint>
#include "ERegionType.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FRegionNamesDataTable : public FTableRowBase {
    ERegionType RegionType; // 0x8
    char pad_9[0x7];
    FString RegionLocName; // 0x10
    int32_t EnemyLevelMin; // 0x20
    int32_t EnemyLevelMax; // 0x24
}; // Size: 0x28
#pragma pack(pop)
