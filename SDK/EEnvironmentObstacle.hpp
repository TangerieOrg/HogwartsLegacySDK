#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnvironmentObstacle {
    Throwable = 0,
    RedBarrel = 1,
    SendTarget = 2,
    ENUM_MAX = 3,
    EEnvironmentObstacle_MAX = 4,
};
#pragma pack(pop)
