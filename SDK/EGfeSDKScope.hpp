#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGfeSDKScope : uint8_t {
    Highlights = 0,
    HighlightsRecordVideo = 1,
    HighlightsRecordScreenshot = 2,
    MAX = 3,
};
#pragma pack(pop)
