#pragma once
#include <cstdint>
#include "FGlobalLightGroupsTimeOnOff.hpp"
#include "FGlobalLightGroupsTimeSpanOnOff.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsScheduleEntry {
    FGlobalLightGroupsTimeOnOff OnOff; // 0x0
    FGlobalLightGroupsTimeSpanOnOff State; // 0x50
}; // Size: 0x68
#pragma pack(pop)
