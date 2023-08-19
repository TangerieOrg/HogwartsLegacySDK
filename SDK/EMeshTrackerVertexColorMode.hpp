#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshTrackerVertexColorMode : uint8_t {
    None = 0,
    Confidence = 1,
    Block = 2,
    EMeshTrackerVertexColorMode_MAX = 3,
};
#pragma pack(pop)
