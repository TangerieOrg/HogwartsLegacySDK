#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindGustCurveRemap : uint8_t {
    None = 0,
    Clamped = 1,
    Unclamped = 2,
    Limit = 3,
    EWindGustCurveRemap_MAX = 4,
};
#pragma pack(pop)
