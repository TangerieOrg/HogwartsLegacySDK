#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightReportLightRig {
    LightRigSun = 0,
    LightRigMoon = 1,
    LightRigLight = 2,
    CloudLighting = 3,
    CloudSkylight = 4,
    CloudShadows = 5,
    EDayNightReportLightRig_MAX = 6,
};
#pragma pack(pop)
