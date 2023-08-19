#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpatialInputGestureAxis : uint8_t {
    None = 0,
    Manipulation = 1,
    Navigation = 2,
    NavigationRails = 3,
    ESpatialInputGestureAxis_MAX = 4,
};
#pragma pack(pop)
