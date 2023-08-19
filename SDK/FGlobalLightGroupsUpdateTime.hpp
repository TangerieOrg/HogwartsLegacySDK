#pragma once
#include <cstdint>
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsUpdateTime {
    FTimespan Time; // 0x0
    FTimespan SolarTime; // 0x8
}; // Size: 0x10
#pragma pack(pop)
