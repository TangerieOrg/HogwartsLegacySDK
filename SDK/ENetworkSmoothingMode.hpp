#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENetworkSmoothingMode : uint8_t {
    Disabled = 0,
    Linear = 1,
    Exponential = 2,
    Replay = 3,
    ENetworkSmoothingMode_MAX = 4,
};
#pragma pack(pop)
