#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETimedAbilityUnit : uint8_t {
    Weeks = 0,
    Days = 1,
    Hours = 2,
    Minutes = 3,
    Seconds = 4,
    RealSeconds = 5,
    ETimedAbilityUnit_MAX = 6,
};
#pragma pack(pop)
