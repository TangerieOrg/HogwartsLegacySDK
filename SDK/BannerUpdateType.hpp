#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum BannerUpdateType : uint8_t {
    BANNER_UPDATE_NEW_MISSION = 0,
    BANNER_UPDATE_MISSION_AVAILABLE = 1,
    BANNER_UPDATE_MISSION_COMPLETE = 2,
    BANNER_UPDATE_MISSION_ENDED = 3,
    BANNER_UPDATE_MISSION_FAILED = 4,
    BANNER_UPDATE_NEW_STEP = 5,
    BANNER_UPDATE_STEP_COMPLETE = 6,
    BANNER_UPDATE_STEP_UPDATED = 7,
    BANNER_UPDATE_STEP_REDISPLAY = 8,
    BANNER_UPDATE_NO_FOCUS_MISSION = 9,
    BANNER_UPDATE_STEP_JOURNAL_UPDATED = 10,
    BANNER_UPDATE_STEP_WAYPOINT = 11,
    BANNER_UPDATE_SHOWMISSIONCOMPLETEUI = 12,
    BANNER_UPDATE_NONE = 13,
    BANNER_UPDATE_COUNT = 14,
    BANNER_UPDATE_MAX = 15,
};
#pragma pack(pop)