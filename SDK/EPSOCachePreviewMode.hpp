#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPSOCachePreviewMode : uint8_t {
    FrameCount = 0,
    Time = 1,
    EPSOCachePreviewMode_MAX = 2,
};
#pragma pack(pop)
