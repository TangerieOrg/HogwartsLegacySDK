#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_SpawnState : uint8_t {
    None = 0,
    Spawning = 1,
    SpawnFinshed = 2,
    ENPC_MAX = 3,
};
#pragma pack(pop)
