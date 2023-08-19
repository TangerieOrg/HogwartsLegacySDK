#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroundSwarmingKillEventType : uint8_t {
    None = 0,
    HitKillBox = 1,
    HitTarget = 2,
    Poof = 3,
    StartBurrow = 4,
    EGroundSwarmingKillEventType_MAX = 5,
};
#pragma pack(pop)
