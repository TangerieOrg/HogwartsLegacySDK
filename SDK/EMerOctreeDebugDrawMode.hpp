#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMerOctreeDebugDrawMode : uint8_t {
    DISABLED = 0,
    UNNAVIGABLE = 1,
    NAVIGABLE = 2,
    CROSS_SECTION = 3,
    REACHABLE = 4,
    PATHFIND = 5,
    REGION = 6,
    EMerOctreeDebugDrawMode_MAX = 7,
};
#pragma pack(pop)
