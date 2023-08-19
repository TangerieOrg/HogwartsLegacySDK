#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkCurveInterpolation : uint8_t {
    Log3 = 0,
    Sine = 1,
    Log1 = 2,
    InvSCurve = 3,
    Linear = 4,
    SCurve = 5,
    Exp1 = 6,
    SineRecip = 7,
    Exp3 = 8,
    LastFadeCurve = 8,
    Constant = 9,
    EAkCurveInterpolation_MAX = 10,
};
#pragma pack(pop)
