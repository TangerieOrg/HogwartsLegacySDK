#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum AnimationValidatedInWorld : uint8_t {
    INWORLD_UNTESTED = 0,
    INWORLD_OBSTRUCTED = 1,
    INWORLD_VALIDATED = 2,
    INWORLD_MAX = 3,
};
#pragma pack(pop)
