#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMap3DState : uint8_t {
    IDLE = 0,
    START = 1,
    DISCOVER = 2,
    TRANSITION_TO_GROUP = 3,
    GROUP = 4,
    TRANSITION_TO_SINGLE = 5,
    SINGLE = 6,
    TRANSITION_TO_CASTLE = 7,
    CASTLE = 8,
    FASTTRAVEL = 9,
    EMap3DState_MAX = 10,
};
#pragma pack(pop)
