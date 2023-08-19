#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightReportLighting {
    DirLightAzi = 0,
    DirLightAlt = 1,
    DirLightIntensity = 2,
    DirLightColor = 3,
    DirLightIndirectIntensity = 4,
    DirLightSpecularScale = 5,
    DirLightLightShaftBloom = 6,
    DirLightLightShaftOcclusion = 7,
    SkyLightIntensity = 8,
    SkyLightIndirectIntensity = 9,
    EDayNightReportLighting_MAX = 10,
};
#pragma pack(pop)
