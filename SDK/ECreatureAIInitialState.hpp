#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureAIInitialState : uint8_t {
    Auto = 0,
    Idle = 1,
    Stationary = 2,
    FollowPath = 3,
    RelaxNearSpawnLocation = 4,
    SpawnOnDen = 5,
    PostGrowUp = 6,
    InCage = 7,
    StationaryGrazing = 8,
    ECreatureAIInitialState_MAX = 9,
};
#pragma pack(pop)
