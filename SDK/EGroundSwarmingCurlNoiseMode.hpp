#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroundSwarmingCurlNoiseMode : uint8_t {
    None = 0,
    Simple2D = 1,
    Faux3D = 2,
    Local2D = 3,
    Expensive3D = 4,
    EGroundSwarmingCurlNoiseMode_MAX = 5,
};
#pragma pack(pop)
