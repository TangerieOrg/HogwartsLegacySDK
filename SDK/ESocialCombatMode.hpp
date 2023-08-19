#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESocialCombatMode : uint8_t {
    AllModes = 0,
    Social = 1,
    Combat = 2,
    Adventure = 3,
    Duress = 4,
    Transfiguration = 5,
    ESocialCombatMode_MAX = 6,
};
#pragma pack(pop)
