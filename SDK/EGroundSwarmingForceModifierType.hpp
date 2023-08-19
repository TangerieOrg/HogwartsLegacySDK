#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroundSwarmingForceModifierType : uint8_t {
    Follow = 0,
    Separation = 1,
    SeparationDistance = 2,
    Alignment = 3,
    Cohesion = 4,
    MaxSpeed = 5,
    CurlNoiseScale = 6,
    Velocity = 7,
    EGroundSwarmingForceModifierType_MAX = 8,
};
#pragma pack(pop)
