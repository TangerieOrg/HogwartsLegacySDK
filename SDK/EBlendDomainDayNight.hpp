#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBlendDomainDayNight : uint8_t {
    DayAndNight = 0,
    DayOnly = 1,
    NightOnly = 2,
    EBlendDomainDayNight_MAX = 3,
};
#pragma pack(pop)
