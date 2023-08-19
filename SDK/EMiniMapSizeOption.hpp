#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMiniMapSizeOption : uint8_t {
    MINIMAP_SIZE_OFF = 0,
    MINIMAP_SIZE_SMALL = 1,
    MINIMAP_SIZE_NORMAL = 2,
    MINIMAP_SIZE_LARGE = 3,
    MINIMAP_SIZE_MAX = 4,
};
#pragma pack(pop)
