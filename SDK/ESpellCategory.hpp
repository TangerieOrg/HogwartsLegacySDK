#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpellCategory : uint8_t {
    None = 0,
    CC = 1,
    Forceful = 2,
    Heavy = 3,
    Tool = 4,
    Sanctuary = 5,
    DarkArts = 6,
    ESpellCategory_MAX = 7,
};
#pragma pack(pop)
