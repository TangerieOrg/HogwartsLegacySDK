#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENpcReactFlyToLocationOption : uint8_t {
    ReactionInstigatorLocation = 0,
    ReactionTargetLocation = 1,
    ENpcReactFlyToLocationOption_MAX = 2,
};
#pragma pack(pop)
