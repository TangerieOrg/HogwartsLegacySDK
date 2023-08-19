#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMapFilterTypes {
    MAP_FILTER_TYPE_NONE = 0,
    MAP_FILTER_TYPE_GENERAL = 1,
    MAP_FILTER_TYPE_BEASTS = 2,
    MAP_FILTER_TYPE_PLANTS = 3,
    MAP_FILTER_TYPE_MAX = 4,
};
#pragma pack(pop)
