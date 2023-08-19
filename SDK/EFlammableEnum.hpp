#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFlammableEnum : uint8_t {
    FE_INFLAMMABLE = 0,
    FE_FLAMMABLE = 1,
    FE_USE_MPD = 2,
    FE_MAX = 3,
};
#pragma pack(pop)
