#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESynthStereoDelayMode : uint8_t {
    Normal = 0,
    Cross = 1,
    PingPong = 2,
    Count = 3,
    ESynthStereoDelayMode_MAX = 4,
};
#pragma pack(pop)
