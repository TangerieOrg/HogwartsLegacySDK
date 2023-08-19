#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EEventType {
    EVENT_TYPE_HOURLY = 0,
    EVENT_TYPE_MINUTELY = 1,
    EVENT_TYPE_TIME = 2,
    EVENT_TYPE_DELTA_TIME = 3,
    EVENT_TYPE_MAX = 4,
};
#pragma pack(pop)
