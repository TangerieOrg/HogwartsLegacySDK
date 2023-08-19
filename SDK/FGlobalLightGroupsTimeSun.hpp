#pragma once
#include <cstdint>
#include "EGlobalLightGroupsSunAngle.hpp"
#include "EGlobalLightGroupsSunDirection.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsTimeSun {
    EGlobalLightGroupsSunAngle Angle; // 0x0
    EGlobalLightGroupsSunDirection Direction; // 0x1
    char pad_2[0x2];
    float AngleOffset; // 0x4
    float VarianceMinutesMin; // 0x8
    float VarianceMinutesMax; // 0xc
}; // Size: 0x10
#pragma pack(pop)
