#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum HouseIds : uint8_t {
    HOUSE_GRYFFINDOR = 0,
    HOUSE_HUFFLEPUFF = 1,
    HOUSE_RAVENCLAW = 2,
    HOUSE_SLYTHERIN = 3,
    HOUSE_UNAFFILIATED = 4,
    HOUSE_COUNT = 5,
    HOUSE_MAX = 6,
};
#pragma pack(pop)
