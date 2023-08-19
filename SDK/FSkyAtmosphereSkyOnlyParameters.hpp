#pragma once
#include <cstdint>
#include "FSkyAtmosphereSkyOnlyColorParameter.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereSkyOnlyParameters {
    float OverallBrightness; // 0x0
    float OverallSaturation; // 0x4
    FSkyAtmosphereSkyOnlyColorParameter SkyMod; // 0x8
    FSkyAtmosphereSkyOnlyColorParameter SunDiskMod; // 0x20
    FSkyAtmosphereSkyOnlyColorParameter MoonDiskMod; // 0x38
}; // Size: 0x50
#pragma pack(pop)
