#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUpdateClockSource : uint8_t {
    Tick = 0,
    Platform = 1,
    Audio = 2,
    RelativeTimecode = 3,
    Timecode = 4,
    Custom = 5,
    EUpdateClockSource_MAX = 6,
};
#pragma pack(pop)
