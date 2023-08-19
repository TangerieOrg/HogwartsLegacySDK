#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESeasonEnum : uint8_t {
    Season_Invalid = 0,
    Season_Fall = 1,
    Season_Winter = 2,
    Season_Spring = 3,
    Season_Summer = 4,
    Season_MAX = 5,
};
#pragma pack(pop)
