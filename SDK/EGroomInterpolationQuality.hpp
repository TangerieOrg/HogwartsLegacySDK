#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroomInterpolationQuality : uint8_t {
    Low = 0,
    Medium = 1,
    High = 2,
    Unknown = 3,
    EGroomInterpolationQuality_MAX = 4,
};
#pragma pack(pop)
