#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroundSwarmingFocusTypeHint : uint8_t {
    None = 0,
    Swarm = 1,
    Target = 2,
    Player = 3,
    EGroundSwarmingFocusTypeHint_MAX = 4,
};
#pragma pack(pop)
