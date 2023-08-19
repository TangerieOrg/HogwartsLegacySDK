#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConjurationSpawnState : uint8_t {
    None = 0,
    Spawned = 1,
    SpawnIn = 2,
    SpawnOut = 3,
    EConjurationSpawnState_MAX = 4,
};
#pragma pack(pop)
