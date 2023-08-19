#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EImpactReactionStrength : uint8_t {
    None = 0,
    Hitch = 1,
    Knockdown = 2,
    Levioso = 3,
    DeathBlows = 4,
    Slam = 5,
    EImpactReactionStrength_MAX = 6,
};
#pragma pack(pop)
