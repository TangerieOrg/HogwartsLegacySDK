#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECollisionResponsePriority : uint8_t {
    Normal = 0,
    InStation = 1,
    CollisionResponse = 2,
    PerformTask = 3,
    Blueprint = 4,
    Cinematic = 5,
    Hidden = 6,
    ECollisionResponsePriority_MAX = 7,
};
#pragma pack(pop)
