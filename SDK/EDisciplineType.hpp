#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDisciplineType : uint8_t {
    NONE = 0,
    Arithmancy = 1,
    Astronomy = 2,
    Beasts = 3,
    Charms = 4,
    DarkArts = 5,
    DefenceAgainstTheDarkArts = 6,
    Divination = 7,
    Flying = 8,
    Herbology = 9,
    HistoryOfMagic = 10,
    Infiltrator = 11,
    Potions = 12,
    Socialite = 13,
    Transfiguration = 14,
    ALL_DISCIPLINES = 15,
    EDisciplineType_MAX = 16,
};
#pragma pack(pop)
