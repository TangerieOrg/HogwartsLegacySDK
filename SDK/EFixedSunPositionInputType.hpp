#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFixedSunPositionInputType : uint8_t {
    AltitudeDegrees = 0,
    PercentageOfTransit = 1,
    PercentageOfTransitOrMidnight = 2,
    EFixedSunPositionInputType_MAX = 3,
};
#pragma pack(pop)
