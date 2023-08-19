#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightGroupsSunAngle : uint8_t {
    FullBrightSky = 0,
    LowerLimbOnHorizon = 1,
    CenterOnHorizon = 2,
    UpperLimbOnHorizon = 3,
    CivilTwilight = 4,
    NauticalTwilight = 5,
    AstronomicalTwilight = 6,
    EGlobalLightGroupsSunAngle_MAX = 7,
};
#pragma pack(pop)
