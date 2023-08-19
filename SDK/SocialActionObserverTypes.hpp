#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum SocialActionObserverTypes : uint8_t {
    OBSERVER_TYPE_SOCIALACTIONHEARSAY = 0,
    OBSERVER_TYPE_SOCIALACTIONTARGET = 1,
    OBSERVER_TYPE_SOCIALACTIONWITNESS = 2,
    OBSERVER_TYPE_COUNT = 3,
    OBSERVER_TYPE_MAX = 4,
};
#pragma pack(pop)
