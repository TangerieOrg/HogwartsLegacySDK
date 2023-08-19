#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBeaconFunctionalTypes {
    BEACON_TYPE_STATIC = 0,
    BEACON_TYPE_DYNAMIC = 1,
    BEACON_TYPE_DISCOVERABLE = 2,
    BEACON_TYPE_ROAMING = 3,
    BEACON_TYPE_MAX = 4,
};
#pragma pack(pop)
