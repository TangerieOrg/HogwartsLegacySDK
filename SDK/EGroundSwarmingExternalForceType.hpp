#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroundSwarmingExternalForceType : uint8_t {
    Forward = 0,
    Up = 1,
    Right = 2,
    Radial = 3,
    RadialTangentUp = 4,
    CurlNoise = 5,
    EGroundSwarmingExternalForceType_MAX = 6,
};
#pragma pack(pop)
