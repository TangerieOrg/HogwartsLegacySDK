#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMobilityOverride : uint8_t {
    MO_NONE = 0,
    MO_STATIC = 1,
    MO_STATIONARY = 2,
    MO_MOVEABLE = 3,
    MO_MAX = 4,
};
#pragma pack(pop)
