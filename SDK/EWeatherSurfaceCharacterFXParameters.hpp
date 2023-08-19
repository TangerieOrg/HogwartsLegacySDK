#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWeatherSurfaceCharacterFXParameters : uint8_t {
    None = 0,
    LocalCoverage = 1,
    LocalCoverageRate = 2,
    LocalDrying = 3,
    CachedIndoors = 4,
    StormCoverage = 5,
    StormIntensity = 6,
    StormPrecipitation = 7,
    StormType = 8,
    StormAge = 9,
    EWeatherSurfaceCharacterFXParameters_MAX = 10,
};
#pragma pack(pop)
