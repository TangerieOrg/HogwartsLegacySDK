#pragma once
#include <cstdint>
#include "FGlobalLightGroupsTimeSun.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsTimeSunOnOff {
    FGlobalLightGroupsTimeSun On; // 0x0
    FGlobalLightGroupsTimeSun Off; // 0x10
}; // Size: 0x20
#pragma pack(pop)
