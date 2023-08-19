#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFrameMetrics {
    float TotalElapsedTime; // 0x0
    float FrameDelta; // 0x4
    int32_t FrameNumber; // 0x8
    int32_t NumDroppedFrames; // 0xc
}; // Size: 0x10
#pragma pack(pop)
