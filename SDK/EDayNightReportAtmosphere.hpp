#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightReportAtmosphere {
    AtmosphereLightingAzi = 0,
    AtmosphereLightingAlt = 1,
    AtmosphereLightingIntensity = 2,
    AtmosphereLightingColor = 3,
    AtmosphereSunMultiplier = 4,
    AtmosphereDesaturation = 5,
    AtmosphereGroundOffset = 6,
    AtmosphereDensityOffset = 7,
    TwilightNightColorationU = 8,
    TwilightNightColorationVBase = 9,
    TwilightNightModColor = 10,
    TwilightNightIntensity = 11,
    TwilightNightDesaturation = 12,
    TwilightNightFogIntensity = 13,
    TwilightNightFogDesaturation = 14,
    TwilightNightFogStart = 15,
    TwilightNightFogEnd = 16,
    TwilightNightFogPower = 17,
    TwilightNightFogVNear = 18,
    TwilightNightFogVFar = 19,
    EDayNightReportAtmosphere_MAX = 20,
};
#pragma pack(pop)
