#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMountErrorMessages {
    Error_EnteringNoFlyZone = 0,
    Error_EnteringNoGroundZone = 1,
    Error_EnteringNoMountsZone = 2,
    Error_InsideNoDismountZone = 3,
    Error_SpeedUpUnavailable = 4,
    Error_LandingUnavailable = 5,
    Error_MAX = 6,
};
#pragma pack(pop)
