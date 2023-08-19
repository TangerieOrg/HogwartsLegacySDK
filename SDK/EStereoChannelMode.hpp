#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStereoChannelMode : uint8_t {
    MidSide = 0,
    LeftRight = 1,
    count = 2,
    EStereoChannelMode_MAX = 3,
};
#pragma pack(pop)
