#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_TargetSelectionWeightData {
    DistNearWeight = 0,
    DistFarWeight = 1,
    DistNear = 2,
    DistFar = 3,
    MaintainTargetWeight = 4,
    MaintainTargetFalloff = 5,
    TargetWeight = 6,
    LargeCharacterWeight = 7,
    NumAttackingMultWeight = 8,
    StayInWeight = 9,
    RecentlyAttackedByWeight = 10,
    RecentlyAttackedByFalloff = 11,
    RecentlyAttackedByPlayerWeight = 12,
    RecentlyAttackedByPlayerFalloff = 13,
    HighlightedByPlayerWeight = 14,
    AttackingWeight = 15,
    RecentlyAttackedTargetWeight = 16,
    RecentlyAttackedTargetFalloff = 17,
    RecentlyAttackedPlayerWeight = 18,
    RecentlyAttackedPlayerFalloff = 19,
    ReactingIncMultWeight = 20,
    ReactingTimePeak = 21,
    ReactingDecMultWeight = 22,
    InCCReactionWeight = 23,
    InKnockDownWeight = 24,
    InRagDollWeight = 25,
    InAirWeight = 26,
    InCriticalHealthWeight = 27,
    InNearDeathKneelingWeight = 28,
    ShielsOnWeight = 29,
    LevelMultWeight = 30,
    LevelMinWeight = 31,
    LevelMaxWeight = 32,
    HealthMultWeight = 33,
    HealthMinWeight = 34,
    HealthMaxWeight = 35,
    ThreatMultWeight = 36,
    ThreatMinWeight = 37,
    ThreatMaxWeight = 38,
    SpiderOnFireWeight = 39,
    InferiusOnFireWeight = 40,
    InferiusKamikazeWeight = 41,
    Count = 42,
    ENPC_MAX = 43,
};
#pragma pack(pop)
