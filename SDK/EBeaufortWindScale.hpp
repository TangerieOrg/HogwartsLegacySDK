#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBeaufortWindScale : uint8_t {
    Calm = 0,
    LightAir = 1,
    LightBreeze = 2,
    GentleBreeze = 3,
    ModerateBreeze = 4,
    FreshBreeze = 5,
    StrongBreeze = 6,
    ModerateGale = 7,
    FreshGale = 8,
    StrongGale = 9,
    WholeGale = 10,
    Storm = 11,
    Hurricane = 12,
    EBeaufortWindScale_MAX = 13,
};
#pragma pack(pop)
