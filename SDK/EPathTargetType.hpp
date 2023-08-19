#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPathTargetType : uint8_t {
    PATH_TARGET_NONE = 0,
    PATH_TARGET_STATIC = 1,
    PATH_TARGET_DYNAMIC = 2,
    PATH_TARGET_BEACON = 3,
    PATH_TARGET_WAYPOINT = 4,
    PATH_TARGET_MAX = 5,
};
#pragma pack(pop)
