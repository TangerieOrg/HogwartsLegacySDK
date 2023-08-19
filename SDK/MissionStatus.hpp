#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum MissionStatus : uint8_t {
    MISSION_STATUS_PREACTIVE = 0,
    MISSION_STATUS_ACTIVATING = 1,
    MISSION_STATUS_ACTIVE = 2,
    MISSION_STATUS_POSTACTIVE = 3,
    MISSION_STATUS_COMPLETE = 4,
    MISSION_STATUS_FAILED = 5,
    MISSION_STATUS_INVALID = 6,
    MISSION_STATUS_MAX = 7,
};
#pragma pack(pop)
