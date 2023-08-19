#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHighContrastDistanceType : uint8_t {
    Item = 0,
    Door = 1,
    Creature = 2,
    Mount = 3,
    Characters = 4,
    Infinity = 5,
    EHighContrastDistanceType_MAX = 6,
};
#pragma pack(pop)
