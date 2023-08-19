#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureStance : uint8_t {
    Standing = 0,
    Sitting = 1,
    LyingDown = 2,
    Sleeping = 3,
    Flying = 4,
    ECreatureStance_MAX = 5,
};
#pragma pack(pop)
