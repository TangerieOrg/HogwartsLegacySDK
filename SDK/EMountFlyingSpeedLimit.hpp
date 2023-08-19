#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMountFlyingSpeedLimit : uint8_t {
    Hover = 0,
    Slow = 1,
    EMountFlyingSpeedLimit_MAX = 2,
};
#pragma pack(pop)
