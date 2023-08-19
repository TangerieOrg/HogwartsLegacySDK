#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureIdleOverrideState : uint8_t {
    None = 0,
    Stationary = 1,
    FollowPath = 2,
    RelaxNearSpawnLocation = 3,
    StationaryGrazing = 4,
    ECreatureIdleOverrideState_MAX = 5,
};
#pragma pack(pop)
