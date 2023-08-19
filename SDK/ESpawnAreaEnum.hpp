#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpawnAreaEnum : uint8_t {
    SPAWN_RING = 0,
    SPAWN_SPHERE = 1,
    SPAWN_SPHERE_FALLOFF = 2,
    SPAWN_MAX = 3,
};
#pragma pack(pop)
