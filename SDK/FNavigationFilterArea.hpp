#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FNavigationFilterArea {
    UClass* AreaClass; // 0x0
    float TravelCostOverride; // 0x8
    float EnteringCostOverride; // 0xc
    uint8_t bIsExcluded : 1; // 0x10
    uint8_t bOverrideTravelCost : 1; // 0x10
    uint8_t bOverrideEnteringCost : 1; // 0x10
    uint8_t pad_bitfield_10_3 : 5;
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
