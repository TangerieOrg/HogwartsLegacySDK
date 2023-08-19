#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ParryCounterStyle : uint8_t {
    Default = 0,
    Direct = 1,
    Downward = 2,
    Upward = 3,
    EEnemy_MAX = 4,
};
#pragma pack(pop)
