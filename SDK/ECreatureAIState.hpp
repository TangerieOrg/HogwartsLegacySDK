#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureAIState : uint8_t {
    UtilitySelection = 0,
    SpawnOnDen = 1,
    FollowActor = 2,
    PostGrowUp = 3,
    Dead = 4,
    Wander_DEPRECATED = 5,
    NearDeathKneeling = 6,
    InCage = 7,
    CustomAbility = 8,
    Mounted = 9,
    Cinematic = 10,
    ScheduledEntityMode = 11,
    ECreatureAIState_MAX = 12,
};
#pragma pack(pop)
