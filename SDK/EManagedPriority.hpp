#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EManagedPriority {
    Lowest = 0,
    System = 1,
    AmbientBehavior = 2,
    DynamicBehavior = 3,
    BackgroundCinematic = 4,
    ForegroundCinematic = 5,
    Highest = 6,
    EManagedPriority_MAX = 7,
};
#pragma pack(pop)
