#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESchedulerTimeDateType : uint8_t {
    SCHEDULER_TYPE_TIME = 0,
    SCHEDULER_TYPE_DATE = 1,
    SCHEDULER_TYPE_DAY = 2,
    SCHEDULER_TYPE_MONTH = 3,
    SCHEDULER_TYPE_TIME_AND_DATE = 4,
    SCHEDULER_TYPE_MAX = 5,
};
#pragma pack(pop)
