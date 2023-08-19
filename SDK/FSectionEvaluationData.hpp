#pragma once
#include <cstdint>
#include "ESectionEvaluationFlags.hpp"
#include "FFrameNumber.hpp"
#pragma pack(push, 1)
struct FSectionEvaluationData {
    int32_t ImplIndex; // 0x0
    FFrameNumber ForcedTime; // 0x4
    ESectionEvaluationFlags flags; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
