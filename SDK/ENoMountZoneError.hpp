#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENoMountZoneError : uint8_t {
    Error_OutOfBounds = 0,
    Error_NoFlyZone = 1,
    Error_NoMountZone = 2,
    Error_LeavingRaceTrack = 3,
    Error_LeavingArea = 4,
    Error_AbandoningRace = 5,
    Error_MAX = 6,
};
#pragma pack(pop)
