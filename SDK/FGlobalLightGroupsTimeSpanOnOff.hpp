#pragma once
#include <cstdint>
#include "FGlobalLightGroupsTimeSpanOnOffState.hpp"
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsTimeSpanOnOff {
    FTimespan NextOn; // 0x0
    FTimespan NextOff; // 0x8
    FGlobalLightGroupsTimeSpanOnOffState State; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
