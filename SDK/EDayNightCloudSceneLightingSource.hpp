#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightCloudSceneLightingSource : uint8_t {
    DirectionalLight = 0,
    SunLight = 1,
    SunDisk = 2,
    MoonLight = 3,
    Manual = 4,
    Automatic = 5,
    EDayNightCloudSceneLightingSource_MAX = 6,
};
#pragma pack(pop)
