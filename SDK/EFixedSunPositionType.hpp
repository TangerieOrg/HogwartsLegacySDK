#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFixedSunPositionType : uint8_t {
    Noon = 0,
    Midnight = 1,
    SunRise = 2,
    SunSet = 3,
    Rising = 4,
    Setting = 5,
    EFixedSunPositionType_MAX = 6,
};
#pragma pack(pop)
