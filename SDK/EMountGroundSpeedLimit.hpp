#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMountGroundSpeedLimit : uint8_t {
    Walk = 0,
    Jog = 1,
    EMountGroundSpeedLimit_MAX = 2,
};
#pragma pack(pop)
