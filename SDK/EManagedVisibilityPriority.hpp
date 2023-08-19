#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EManagedVisibilityPriority : uint8_t {
    Lowest = 0,
    NpcShutdown = 1,
    SceneRigDefault = 2,
    PersistentVisibility = 3,
    SeatFillerStartup = 4,
    AsyncSpawn = 5,
    OutOfView = 6,
    InViewVisibility = 7,
    HideTrigger = 8,
    VisibilityTimeWindow = 9,
    ForceHidden = 10,
    WanderAndHide = 11,
    HighestSystem = 12,
    PassiveCinematic = 13,
    ActiveCinematic = 14,
    Highest = 15,
    HardDestroyPriority = 16,
    EManagedVisibilityPriority_MAX = 17,
};
#pragma pack(pop)
