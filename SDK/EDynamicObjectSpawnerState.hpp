#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDynamicObjectSpawnerState : uint8_t {
    Inactive = 0,
    Active = 1,
    Spawning = 2,
    Dormant = 3,
    EDynamicObjectSpawnerState_MAX = 4,
};
#pragma pack(pop)
