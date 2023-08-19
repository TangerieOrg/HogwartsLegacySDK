#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class NPC_ParryCounterrState {
    ParryCounterNone = 0,
    ParryCounterFirst = 1,
    ParryCounterSecond = 2,
    ParryCounterThird = 3,
    ParryCounterFourth = 4,
    ParryCounterFifth = 5,
    ParryCounterBreak = 6,
    NPC_MAX = 7,
};
#pragma pack(pop)
