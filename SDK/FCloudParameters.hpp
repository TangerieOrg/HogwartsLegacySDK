#pragma once
#include <cstdint>
#include "FSunDiskOverrides.hpp"
#include "FVolumetricCloudsPresetParams.hpp"
#include "FVolumetricCloudsWeatherWindParams.hpp"
#pragma pack(push, 1)
struct FCloudParameters {
    FVolumetricCloudsPresetParams Params; // 0x0
    FVolumetricCloudsWeatherWindParams WindParams; // 0x108
    FSunDiskOverrides SunDiskOverrides; // 0x144
    float Overcast; // 0x158
    float HeightOffset; // 0x15c
    bool bSuperExpensiveCloudsCinematicOnly; // 0x160
    char pad_161[0x7];
}; // Size: 0x168
#pragma pack(pop)
