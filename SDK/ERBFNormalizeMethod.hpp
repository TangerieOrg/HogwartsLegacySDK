#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERBFNormalizeMethod : uint8_t {
    OnlyNormalizeAboveOne = 0,
    AlwaysNormalize = 1,
    NormalizeWithinMedian = 2,
    NoNormalization = 3,
    ERBFNormalizeMethod_MAX = 4,
};
#pragma pack(pop)
