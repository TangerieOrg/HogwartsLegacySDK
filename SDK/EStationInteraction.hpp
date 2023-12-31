#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStationInteraction : uint8_t {
    STATION_INTERACTION_CURRENT_NONE = 0,
    STATION_INTERACTION_CURRENT_ENTERING = 1,
    STATION_INTERACTION_CURRENT_INSIDE = 2,
    STATION_INTERACTION_CURRENT_EXITING = 3,
    STATION_INTERACTION_DESIRED_NONE = 4,
    STATION_INTERACTION_DESIRED_ENTER = 5,
    STATION_INTERACTION_DESIRED_ENTER_NOW = 6,
    STATION_INTERACTION_DESIRED_EXIT = 7,
    STATION_INTERACTION_DESIRED_EXITNOW = 8,
    STATION_INTERACTION_DESIRED_AUTO_EXIT = 9,
    STATION_INTERACTION_MAIL_START = 10,
    STATION_INTERACTION_MAIL_END = 11,
    STATION_INTERACTION_MISSION_START = 12,
    STATION_INTERACTION_MISSION_END = 13,
    STATION_INTERACTION_MAX = 14,
};
#pragma pack(pop)
