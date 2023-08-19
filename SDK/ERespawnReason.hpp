#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERespawnReason : uint8_t {
    None = 0,
    RespawnedFromDeath = 1,
    RespawnedFromFailure = 2,
    TraveledToDungeon = 3,
    TraveledFromDungeon = 4,
    FastTraveled = 5,
    StartedNewDay = 6,
    JogIntoScene = 7,
    WalkIntoScene = 8,
    IntrusionCaught = 9,
    DeathlyHallowsSpawn = 10,
    FastTraveledViaMission = 11,
    ERespawnReason_MAX = 12,
};
#pragma pack(pop)
