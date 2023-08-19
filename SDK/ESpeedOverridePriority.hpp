#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpeedOverridePriority {
    ScheduledEntityPriority = 0,
    SplineWalkerPriority = 1,
    PerformTaskPriority = 2,
    PerformTaskForAIPriority = 3,
    GhostStoryPriority = 4,
    CrimeSystemPriority = 5,
    ForcedNavigationPriority = 6,
    WalkToStationPriority = 7,
    ApparatePriority = 8,
    ESpeedOverridePriority_MAX = 9,
};
#pragma pack(pop)
