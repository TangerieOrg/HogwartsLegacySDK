#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBeaconDisplayPriority : uint8_t {
    BEACON_DISPLAY_PRIORITY_LOW = 0,
    BEACON_DISPLAY_PRIORITY_MEDIUM = 1,
    BEACON_DISPLAY_PRIORITY_HIGH = 2,
    BEACON_DISPLAY_PRIORITY_HIGHEST = 3,
    BEACON_DISPLAY_PRIORITY_MAX = 4,
};
#pragma pack(pop)
