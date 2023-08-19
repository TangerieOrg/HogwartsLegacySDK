#pragma once
#include <cstdint>
#include "EBeaconState.hpp"
#include "EBeaconType.hpp"
#include "FMapTierDescription.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FTierDataTable : public FTableRowBase {
    EBeaconType BeaconType; // 0x8
    EBeaconState BeaconState; // 0x9
    bool CanFastTravel; // 0xa
    char pad_b[0x1];
    FMapTierDescription Tier1; // 0xc
    FMapTierDescription Tier2; // 0x18
    FMapTierDescription Tier3; // 0x24
    FMapTierDescription Tier4; // 0x30
    FMapTierDescription Tier5; // 0x3c
    float IconScale; // 0x48
    float IconZoomScaleFactor; // 0x4c
    int32_t IconPriority; // 0x50
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
