#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EQuarztClockManagerType {
    AudioEngine = 0,
    QuartzSubsystem = 1,
    Count = 2,
    EQuarztClockManagerType_MAX = 3,
};
#pragma pack(pop)
