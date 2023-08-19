#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESynthLFOMode : uint8_t {
    Sync = 0,
    OneShot = 1,
    Free = 2,
    Count = 3,
    ESynthLFOMode_MAX = 4,
};
#pragma pack(pop)
