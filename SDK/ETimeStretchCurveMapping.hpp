#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeStretchCurveMapping {
    T_Original = 0,
    T_TargetMin = 1,
    T_TargetMax = 2,
    MAX = 3,
};
#pragma pack(pop)
