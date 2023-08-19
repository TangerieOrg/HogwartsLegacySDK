#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class LookAtType : uint8_t {
    Player = 0,
    SpellTarget = 1,
    Both = 2,
    LookAtType_MAX = 3,
};
#pragma pack(pop)
