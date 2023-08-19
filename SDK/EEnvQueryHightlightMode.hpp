#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnvQueryHightlightMode : uint8_t {
    All = 0,
    Best5Pct = 1,
    Best25Pct = 2,
    EEnvQueryHightlightMode_MAX = 3,
};
#pragma pack(pop)
