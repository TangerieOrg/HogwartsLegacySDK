#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimedDataInputEvaluationType {
    None = 0,
    Timecode = 1,
    PlatformTime = 2,
    ETimedDataInputEvaluationType_MAX = 3,
};
#pragma pack(pop)
