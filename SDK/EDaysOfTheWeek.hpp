#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EDaysOfTheWeek : uint8_t {
    MONDAY = 0,
    TUESDAY = 1,
    WEDNESDAY = 2,
    THURSDAY = 3,
    FRIDAY = 4,
    SATURDAY = 5,
    SUNDAY = 6,
    ALL_DAYS = 7,
    EDaysOfTheWeek_MAX = 8,
};
#pragma pack(pop)
