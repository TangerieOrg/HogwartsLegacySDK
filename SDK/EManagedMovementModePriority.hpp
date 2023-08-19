#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EManagedMovementModePriority : uint8_t {
    Lowest = 0,
    PassiveCinematic = 1,
    ActiveCinematic = 2,
    Highest = 3,
    EManagedMovementModePriority_MAX = 4,
};
#pragma pack(pop)
