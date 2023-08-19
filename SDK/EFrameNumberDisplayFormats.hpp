#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFrameNumberDisplayFormats {
    NonDropFrameTimecode = 0,
    DropFrameTimecode = 1,
    Seconds = 2,
    Frames = 3,
    MAX_Count = 4,
    EFrameNumberDisplayFormats_MAX = 5,
};
#pragma pack(pop)
