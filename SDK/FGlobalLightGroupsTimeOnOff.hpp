#pragma once
#include <cstdint>
#include "FGlobalLightGroupsTimeHMSOnOff.hpp"
#include "FGlobalLightGroupsTimeSunOnOff.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsTimeOnOff {
    FGlobalLightGroupsTimeHMSOnOff TimeOnOff; // 0x0
    FGlobalLightGroupsTimeSunOnOff SunOnOff; // 0x2c
    bool bUseTime; // 0x4c
    char pad_4d[0x3];
}; // Size: 0x50
#pragma pack(pop)
