#pragma once
#include <cstdint>
#include "FGlobalLightGroupsScheduleEntry.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsGroupSchedule {
    int32_t Group; // 0x0
    char pad_4[0x4];
    TArray<FGlobalLightGroupsScheduleEntry> Schedule; // 0x8
    FName HermesEvent; // 0x18
    bool bDisabled; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
