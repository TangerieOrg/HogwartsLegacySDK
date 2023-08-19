#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightReportSky {
    NightNegOneDayOne = 0,
    NightDay = 1,
    Night = 2,
    Day = 3,
    NightSkyStrength = 4,
    SunAzi = 5,
    SunAlt = 6,
    SunDiskAzi = 7,
    SunDiskAlt = 8,
    SunLightAzi = 9,
    SunLightAlt = 10,
    SunVisibility = 11,
    SunScale = 12,
    MoonAzi = 13,
    MoonAlt = 14,
    MoonPhase = 15,
    MoonSize = 16,
    MoonVisibility = 17,
    MoonScale = 18,
    MoonSunAngle = 19,
    PlanetVenus = 20,
    PlanetMars = 21,
    PlanetJupiter = 22,
    PlanetSaturn = 23,
    EDayNightReportSky_MAX = 24,
};
#pragma pack(pop)
