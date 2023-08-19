#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESlaveToSplineUpdateMode : uint8_t {
    Wrap = 0,
    PingPong = 1,
    Once = 2,
    Manual = 3,
    ESlaveToSplineUpdateMode_MAX = 4,
};
#pragma pack(pop)
