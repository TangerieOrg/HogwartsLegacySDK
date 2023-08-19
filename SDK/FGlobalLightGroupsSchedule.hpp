#pragma once
#include <cstdint>
#include "FGlobalLightGroupsTimeOnOff.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsSchedule {
    TArray<FGlobalLightGroupsTimeOnOff> ScheduleEntries; // 0x0
}; // Size: 0x10
#pragma pack(pop)
