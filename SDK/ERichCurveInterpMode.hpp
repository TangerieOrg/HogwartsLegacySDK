#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERichCurveInterpMode : uint8_t {
    RCIM_Linear = 0,
    RCIM_Constant = 1,
    RCIM_Cubic = 2,
    RCIM_None = 3,
    RCIM_MAX = 4,
};
#pragma pack(pop)
