#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDateTimeDayOfWeek : uint8_t {
    Monday = 0,
    Tuesday = 1,
    Wednesday = 2,
    Thursday = 3,
    Friday = 4,
    Saturday = 5,
    Sunday = 6,
    EDateTimeDayOfWeek_MAX = 7,
};
#pragma pack(pop)
