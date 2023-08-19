#pragma once
#include <cstdint>
#include "FGlobalLightGroupsScheduleEntry.hpp"
#pragma pack(push, 1)
struct FLightComponentSchedule {
    TArray<FGlobalLightGroupsScheduleEntry> Schedule; // 0x0
    FName Name; // 0x10
    FName HermesEvent; // 0x18
    uint8_t bToggleChildren : 1; // 0x20
    uint8_t bDisabled : 1; // 0x20
    uint8_t pad_bitfield_20_2 : 6;
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
