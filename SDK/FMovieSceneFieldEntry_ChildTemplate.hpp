#pragma once
#include <cstdint>
#include "ESectionEvaluationFlags.hpp"
#include "FFrameNumber.hpp"
#pragma pack(push, 1)
struct FMovieSceneFieldEntry_ChildTemplate {
    uint16_t ChildIndex; // 0x0
    ESectionEvaluationFlags flags; // 0x2
    char pad_3[0x1];
    FFrameNumber ForcedTime; // 0x4
}; // Size: 0x8
#pragma pack(pop)
