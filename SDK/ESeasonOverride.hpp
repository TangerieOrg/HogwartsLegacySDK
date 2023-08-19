#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESeasonOverride : uint8_t {
    SO_NONE = 0,
    SO_SPRING = 1,
    SO_FALL = 2,
    SO_WINTER = 3,
    SO_SUMMER = 4,
    SO_MAX = 5,
};
#pragma pack(pop)
