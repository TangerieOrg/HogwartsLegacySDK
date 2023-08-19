#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHairInterpolationQuality : uint8_t {
    Low = 0,
    Medium = 1,
    High = 2,
    Unknown = 3,
    EHairInterpolationQuality_MAX = 4,
};
#pragma pack(pop)
