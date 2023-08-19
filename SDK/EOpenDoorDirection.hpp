#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOpenDoorDirection : uint8_t {
    AwayFromPlayer = 0,
    Clockwise = 1,
    CounterClockwise = 2,
    EOpenDoorDirection_MAX = 3,
};
#pragma pack(pop)
