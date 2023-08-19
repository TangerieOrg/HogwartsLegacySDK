#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMountTypes : uint8_t {
    Broom_Flying = 0,
    Broom_Ground = 1,
    Graphorn_Ground = 2,
    Hippogriff_Flying = 3,
    Hippogriff_Ground = 4,
    Niffler_Ground = 5,
    Avatar_Ground = 6,
    EMountTypes_MAX = 7,
};
#pragma pack(pop)
