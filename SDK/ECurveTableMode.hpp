#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECurveTableMode {
    Empty = 0,
    SimpleCurves = 1,
    RichCurves = 2,
    ECurveTableMode_MAX = 3,
};
#pragma pack(pop)
