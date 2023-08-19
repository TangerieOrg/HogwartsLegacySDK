#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDevilsSnareState : uint8_t {
    Hidden = 0,
    Idle = 1,
    Recoiling = 2,
    Regrowing = 3,
    Grabbing = 4,
    EDevilsSnareState_MAX = 5,
};
#pragma pack(pop)
