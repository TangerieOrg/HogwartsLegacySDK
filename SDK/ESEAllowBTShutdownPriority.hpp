#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESEAllowBTShutdownPriority : uint8_t {
    LowestPriority = 0,
    SeatFillerPriority = 1,
    HighestPriority = 2,
    ESEAllowBTShutdownPriority_MAX = 3,
};
#pragma pack(pop)
