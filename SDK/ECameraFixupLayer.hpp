#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraFixupLayer : uint8_t {
    Lowest = 0,
    Passive = 1,
    Active = 2,
    Highest = 3,
    ECameraFixupLayer_MAX = 4,
};
#pragma pack(pop)
