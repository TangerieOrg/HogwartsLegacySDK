#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EManagedNPCHeadTrackingPriority {
    Lowest = 0,
    PointOfInterest = 1,
    PerformTask = 2,
    AttackTarget = 3,
    Highest = 4,
    Forced = 5,
    EManagedNPCHeadTrackingPriority_MAX = 6,
};
#pragma pack(pop)
