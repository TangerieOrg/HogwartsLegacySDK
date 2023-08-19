#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDistTypeToTarget {
    None = 0,
    Attack = 1,
    Pressure = 2,
    Far = 3,
    Count = 4,
    EDistTypeToTarget_MAX = 5,
};
#pragma pack(pop)
