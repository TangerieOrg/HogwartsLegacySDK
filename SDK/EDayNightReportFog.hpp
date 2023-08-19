#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightReportFog {
    FogDensity = 0,
    FogOpacity = 1,
    FogDistances = 2,
    FogInscattering = 3,
    FogVolumetric = 4,
    EDayNightReportFog_MAX = 5,
};
#pragma pack(pop)
