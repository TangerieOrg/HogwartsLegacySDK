#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpellButton : uint8_t {
    SPELL_TOP = 0,
    SPELL_BOTTOM = 1,
    SPELL_LEFT = 2,
    SPELL_RIGHT = 3,
    SPELL_MAX = 4,
};
#pragma pack(pop)
