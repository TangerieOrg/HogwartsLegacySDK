#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDaysOfTheWeekBitmask {
    Monday = 0,
    Tuesday = 1,
    Wednesday = 2,
    Thursday = 3,
    Friday = 4,
    Saturday = 5,
    Sunday = 6,
    EveryDay = 7,
    EDaysOfTheWeekBitmask_MAX = 8,
};
#pragma pack(pop)
