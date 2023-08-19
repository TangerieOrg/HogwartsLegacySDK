#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDynamicObstacleShape : uint8_t {
    SHAPE_NONE = 0,
    SHAPE_BOX = 1,
    SHAPE_CAPSULE = 2,
    SHAPE_SPHERE = 3,
    SHAPE_MAX = 4,
};
#pragma pack(pop)
