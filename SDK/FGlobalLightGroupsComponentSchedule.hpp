#pragma once
#include <cstdint>
#include "FGlobalLightGroupsScheduleEntry.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsComponentSchedule {
    TArray<FGlobalLightGroupsScheduleEntry> Schedule; // 0x0
    uint8_t bToggleChildren : 1; // 0x10
    uint8_t bPropagateToParent : 1; // 0x10
    uint8_t bDisabled : 1; // 0x10
    uint8_t pad_bitfield_10_3 : 5;
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
