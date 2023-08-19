#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESpawnedStationTypes : uint8_t {
    SPAWNED_STATION_TYPE_NONE = 0,
    SPAWNED_STATION_TYPE_WALKBY = 1,
    SPAWNED_STATION_TYPE_STOPCHAT = 2,
    SPAWNED_STATION_TYPE_MOVING_R = 3,
    SPAWNED_STATION_TYPE_MOVING_LR = 4,
    SPAWNED_STATION_TYPE_COUNT = 5,
    SPAWNED_STATION_TYPE_MAX = 6,
};
#pragma pack(pop)
