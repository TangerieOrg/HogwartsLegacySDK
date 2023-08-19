#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_Tether : uint8_t {
    None = 0,
    Spawn = 1,
    Player = 2,
    Location = 3,
    WanderStartLocation = 4,
    Actor = 5,
    ENPC_MAX = 6,
};
#pragma pack(pop)
