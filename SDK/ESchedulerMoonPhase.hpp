#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESchedulerMoonPhase : uint8_t {
    MOONPHASE_NEWMOON = 0,
    MOONPHASE_WAXINGCRESCENT = 1,
    MOONPHASE_FIRSTQUARTER = 2,
    MOONPHASE_WAXINGGIBBOUS = 3,
    MOONPHASE_FULLMOON = 4,
    MOONPHASE_WANINGGIBBOUS = 5,
    MOONPHASE_LASTQUARTER = 6,
    MOONPHASE_WANINGCRESCENT = 7,
    MOONPHASE_MAX = 8,
};
#pragma pack(pop)
