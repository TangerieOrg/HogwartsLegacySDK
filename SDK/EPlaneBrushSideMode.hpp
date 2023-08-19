#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPlaneBrushSideMode : uint8_t {
    BothSides = 0,
    PushDown = 1,
    PullTowards = 2,
    EPlaneBrushSideMode_MAX = 3,
};
#pragma pack(pop)
