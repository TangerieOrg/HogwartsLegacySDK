#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMapRegionType : uint8_t {
    MAP_REGION_TYPE_UNDEFINED = 0,
    MAP_REGION_TYPE_ROOM = 1,
    MAP_REGION_TYPE_FLOOR = 2,
    MAP_REGION_TYPE_STAIRS = 3,
    MAP_REGION_TYPE_TOWER = 4,
    MAP_REGION_TYPE_COUNT = 5,
    MAP_REGION_TYPE_MAX = 6,
};
#pragma pack(pop)
