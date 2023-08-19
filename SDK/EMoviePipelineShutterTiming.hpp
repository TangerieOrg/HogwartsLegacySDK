#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMoviePipelineShutterTiming : uint8_t {
    FrameOpen = 0,
    FrameCenter = 1,
    FrameClose = 2,
    EMoviePipelineShutterTiming_MAX = 3,
};
#pragma pack(pop)
