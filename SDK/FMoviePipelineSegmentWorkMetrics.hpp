#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMoviePipelineSegmentWorkMetrics {
    FString SegmentName; // 0x0
    int32_t OutputFrameIndex; // 0x10
    int32_t TotalOutputFrameCount; // 0x14
    int32_t OutputSubSampleIndex; // 0x18
    int32_t TotalSubSampleCount; // 0x1c
    int32_t EngineWarmUpFrameIndex; // 0x20
    int32_t TotalEngineWarmUpFrameCount; // 0x24
}; // Size: 0x28
#pragma pack(pop)
