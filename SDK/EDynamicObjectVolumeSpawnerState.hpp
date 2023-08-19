#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDynamicObjectVolumeSpawnerState {
    Inactive = 0,
    GatheringData = 1,
    Loading = 2,
    Active = 3,
    Spawning = 4,
    Culling = 5,
    Dormant = 6,
    EDynamicObjectVolumeSpawnerState_MAX = 7,
};
#pragma pack(pop)
