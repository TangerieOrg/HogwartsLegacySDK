#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInsideVolumeOptions {
    ProbeLighting = 0,
    Audio = 1,
    Streaming = 2,
    Game = 3,
    Weather = 4,
    WindMask = 5,
    EInsideVolumeOptions_MAX = 6,
};
#pragma pack(pop)
