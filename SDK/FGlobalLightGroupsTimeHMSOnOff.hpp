#pragma once
#include <cstdint>
#include "FGlobalLightGroupsTimeHMS.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsTimeHMSOnOff {
    FGlobalLightGroupsTimeHMS On; // 0x0
    FGlobalLightGroupsTimeHMS Off; // 0x14
    bool bNormalizeForSeasons; // 0x28
    char pad_29[0x3];
}; // Size: 0x2c
#pragma pack(pop)
