#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWaterVfx : uint8_t {
    EnterWater = 0,
    Floating = 1,
    ExitWater = 2,
    Count = 3,
    EWaterVfx_MAX = 4,
};
#pragma pack(pop)
