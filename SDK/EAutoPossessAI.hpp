#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAutoPossessAI : uint8_t {
    Disabled = 0,
    PlacedInWorld = 1,
    Spawned = 2,
    PlacedInWorldOrSpawned = 3,
    EAutoPossessAI_MAX = 4,
};
#pragma pack(pop)
