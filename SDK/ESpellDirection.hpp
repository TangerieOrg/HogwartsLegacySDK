#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpellDirection : uint8_t {
    SpellDir_North = 0,
    SpellDir_NorthEast = 1,
    SpellDir_East = 2,
    SpellDir_SouthEast = 3,
    SpellDir_South = 4,
    SpellDir_SouthWest = 5,
    SpellDir_West = 6,
    SpellDir_NorthWest = 7,
    SpellDir_MAX = 8,
};
#pragma pack(pop)
