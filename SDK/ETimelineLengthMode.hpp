#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETimelineLengthMode : uint8_t {
    TL_TimelineLength = 0,
    TL_LastKeyFrame = 1,
    TL_MAX = 2,
};
#pragma pack(pop)
