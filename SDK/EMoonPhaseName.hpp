#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMoonPhaseName : uint8_t {
    NewMoon = 0,
    WaxingCrescent = 1,
    FirstQuarter = 2,
    WaxingGibbous = 3,
    FullMoon = 4,
    WaningGibbous = 5,
    LastQuarter = 6,
    WaningCrescent = 7,
    EMoonPhaseName_MAX = 8,
};
#pragma pack(pop)
